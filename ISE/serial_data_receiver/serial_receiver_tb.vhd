--------------------------------------------------------------------------------
--                                 CNEA - CAE - IYC
--------------------------------------------------------------------------------
--
-- Proyecto:    Vector Shifter
-- Autor:       Mariano M. Franceschetti (marianofranceschetti@cae.cnea.gov.ar).
-- Código:      V0.0.0-A0
-- Descripción: Ejemplo 5.6 del Volnei
--                  
--
--------------------------------------------------------------------------------
-- Evolución   Fecha        Revisor    Comentarios
-- 0           23/08/2023   JEA        Original.
--------------------------------------------------------------------------------


library ieee;
use ieee.std_logic_1164.all;

entity serial_receiver_tb is
end serial_receiver_tb;

architecture behavioral of serial_receiver_tb is

   constant SYSCLK_PERIOD : time := 100 ns; -- 10MHZ

   signal SYSCLK       : std_logic := '0';
   signal NSYSRESET    : bit := '0';
   signal s_tb_data_in : bit       := '0';
   signal s_tb_data	  : bit_vector( 6 downto 0 );
   signal s_tb_err	  : bit       := '0';
   signal s_tb_data_ok : bit       := '0';

begin

   process  
      variable vhdl_initial : BOOLEAN := TRUE;
      variable example_data : bit_vector(9 downto 0) := "1001001111";
		variable i : integer := 0;
   begin
      if ( vhdl_initial ) then
         -- Assert Reset
         NSYSRESET <= '1';
         wait for ( SYSCLK_PERIOD * 2 );         
         NSYSRESET <= '0';
			for i in 0 to 9 loop
				s_tb_data_in <= example_data( i );
				wait for SYSCLK_PERIOD;
			end loop;
         wait;
      end if;
   end process;

   -- Clock Driver
   SYSCLK <= not SYSCLK after (SYSCLK_PERIOD / 2.0 );

   -- Instantiate Unit Under Test:  vending_machine_controller
   uut: entity work.serial_data_receiver
      -- port map
      port map( 
         -- Inputs
         rst => NSYSRESET,
         i_data_in => s_tb_data_in,
         clk => SYSCLK,
         -- Outputs
         o_data    => s_tb_data,
         o_err     =>  s_tb_err,
         o_data_ok =>  s_tb_data_ok
      );

end behavioral;

