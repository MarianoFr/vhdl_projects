--------------------------------------------------------------------------------
--                                 CNEA - CAE - IYC
--------------------------------------------------------------------------------
--
-- Proyecto:    Two digit counter with seven segments display Test Bench
-- Autor:       Mariano M. Franceschetti (marianofranceschetti@cae.cnea.gov.ar).
-- Código:      V0.0.0-A0
-- Descripción: Ejemplo 6.7 del Volnei
--                  
--
--------------------------------------------------------------------------------
-- Evolución   Fecha        Revisor    Comentarios
-- 0           11/08/2023   JEA        Original.
--------------------------------------------------------------------------------


library ieee;
use ieee.std_logic_1164.all;

entity two_digit_counter_display_tb is
end two_digit_counter_display_tb;

architecture behavioral of two_digit_counter_display_tb is

   constant SYSCLK_PERIOD : time := 100 ns; -- 10MHZ
   signal SYSCLK : std_logic := '0';
   signal SYSRESET : std_logic := '0';
   signal o_digit_1 : std_logic_vector(6 downto 0);
   signal o_digit_2 : std_logic_vector(6 downto 0);

begin

   process
      variable vhdl_initial : BOOLEAN := TRUE;
   begin
      if ( vhdl_initial ) then
         -- Assert Reset
         SYSRESET <= '1';
         wait for ( SYSCLK_PERIOD * 5 );            
         SYSRESET <= '0';
         wait;
      end if;
   end process;

   -- Clock Driver
   SYSCLK <= not SYSCLK after (SYSCLK_PERIOD / 2.0 );

   -- Instantiate Unit Under Test:  two_digit_counter_display
   uut: entity work.two_digit_counter_display 
   port map( 
      -- Inputs
      clk => SYSCLK,
      rst => SYSRESET,
      o_digit_1 => o_digit_1,
      o_digit_2 => o_digit_1
   );

end behavioral;

