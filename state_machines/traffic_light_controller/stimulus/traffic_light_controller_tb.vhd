--------------------------------------------------------------------------------
--                                 CNEA - CAE - IYC
--------------------------------------------------------------------------------
--
-- Proyecto:    Traffic Light Controller
-- Autor:       Mariano M. Franceschetti (marianofranceschetti@cae.cnea.gov.ar).
-- Código:      V0.0.0-A0
-- Descripción: Ejemplo 8.5 del Volnei
-- Digital controllers are good examples of circuits that can be
-- effciently implemented when modeled as state machines.
--------------------------------------------------------------------------------
-- Evolución   Fecha        Revisor    Comentarios
-- 0           15/08/2023   JEA        Original.
--------------------------------------------------------------------------------

library ieee;
use ieee.std_logic_1164.all;

entity traffic_light_controller_tb is
end traffic_light_controller_tb;

architecture behavioral of traffic_light_controller_tb is

   constant CLK_PERIOD : time := 100 ns; -- 10MHZ
   signal clk: std_logic := '0';
   signal si_stby: std_logic;
   signal si_test: std_logic := '0';
   signal so_r1: std_logic;
   signal so_r2: std_logic;
   signal so_y1: std_logic;
   signal so_y2: std_logic;
   signal so_g1: std_logic;
   signal so_g2: std_logic;  

begin

   process
      variable vhdl_initial : BOOLEAN := TRUE;
   begin
      if ( vhdl_initial ) then
         -- Assert Reset
         si_stby <= '1';
         wait for ( CLK_PERIOD * 5);         
         si_stby <= '0';
         wait;
      end if;
   end process;

   -- Clock Driver
   clk <= not clk after (CLK_PERIOD / 2.0 );

   -- Change test signal
   process
   begin
      --wait for CLK_PERIOD/2.0;     
      loop                     
         si_test <= not si_test;
         wait for CLK_PERIOD*20;
      end loop;      
   end process;
   -- Instantiate Unit Under Test:  traffic_light_controller
   uut: entity work.traffic_light_controller
      -- port map
      port map( 
         -- Inputs
         clk => clk,
         i_stby => si_stby,
         i_test => si_test,
         -- Outputs
         o_r1 => so_r1,
         o_r2 => so_r2,
         o_y1 => so_y1,
         o_y2 => so_y2,
         o_g1 => so_g1,
         o_g2 => so_g2
      );

end behavioral;

