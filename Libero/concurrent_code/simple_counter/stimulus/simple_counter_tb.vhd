--------------------------------------------------------------------------------
--                                 CNEA - CAE - IYC
--------------------------------------------------------------------------------
--
-- Proyecto:    1 digit counter TestBench
-- Autor:       Mariano M. Franceschetti (marianofranceschetti@cae.cnea.gov.ar).
-- Código:      V0.0.0-A0
-- Descripción: Ejemplo 4.2 del Volnei TestBench
--                  
--
--------------------------------------------------------------------------------
-- Evolución   Fecha        Revisor    Comentarios
-- 0           11/08/2023   JEA        Original.
--------------------------------------------------------------------------------


library ieee;
use ieee.std_logic_1164.all;

entity simple_counter_tb is
end simple_counter_tb;

architecture behavioral of simple_counter_tb is
   constant SYSCLK_PERIOD : time := 100 ns; -- 10MHZ
   signal SYSCLK : std_logic := '0';
   signal SYSRESET : std_logic := '0';
   signal o_digit : integer range 0 to 9;
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
   clk_increment: process
   begin
      SYSCLK <= not SYSCLK after (SYSCLK_PERIOD / 2.0 );
   end process clk_increment;
   -- Instantiate Unit Under Test:  simple_counter
   uut: entity work.simple_counter
      -- port map
      port map( 
         rst => SYSRESET,
         -- Inputs
         clk => SYSCLK,
         -- Outputs
         o_digit => o_digit
         -- Inouts
      );
end behavioral;

