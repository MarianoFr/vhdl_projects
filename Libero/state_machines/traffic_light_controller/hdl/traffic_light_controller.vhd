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
--
--
--    stby         _ 
--     ↓          ↓ |i_d=0
--    ----       ----      i_d=1    -----
--   | YY |----►| RY |------------►| ONE |
--    ----      ----◄------------|o_q=1|
--                ◄-    i_d=0   -----
--               ▲     \   i_d=0     |i_d=1
--          i_d=0|      ---------    ▼
--            -------            \ -------
--           | THREE |◄-----------| TWO   |
--           | o_q=1 |     i_d=1  | o_q=0 |
--            -------              -------
--              ↑_|
--              i_d=1   
--
library IEEE;

use IEEE.std_logic_1164.all;

entity traffic_light_controller is
   port (      
      clk: in std_logic;
      i_stby: in std_logic;
      i_test: in std_logic;
      o_r1: out std_logic;
      o_r2: out std_logic;
      o_y1: out std_logic;
      o_y2: out std_logic;
      o_g1: out std_logic;
      o_g2: out std_logic
   );
end traffic_light_controller;
architecture behavoiral of traffic_light_controller is
   constant C_TIME_MAX: INTEGER := 3;
   constant C_TIME_RG: INTEGER := 3;
   constant C_TIME_RY : INTEGER := 3;
   constant C_TIME_GR : INTEGER := 3;
   constant C_TIME_YR : INTEGER := 3;
   constant C_TIME_TEST : INTEGER := 1;
   type t_state is (E_RG, E_RY, E_GR, E_YR, E_YY);
   signal pr_state, nx_state: t_state;
   signal time: integer range 0 to C_TIME_MAX;

begin

----------------- Lower section of state machine: Sequential Logic -----------------
-- In this section, pr_state is updated in a synchronous way (clk dependent) and also 
-- with its inputs (i_stby).
   process (clk, i_stby) -- Sensitivity list, depends on clk and stanby command
      variable count: integer range 0 to C_TIME_MAX;
   begin
      if (rising_edge(clk)) THEN
         if (i_stby='1') then
            pr_state <= E_YY;
            count := 0; -- must stay on E_YY as long as stby=1, no counting needed
         else
            if (count >= time) then -- time is the current period the current state must be executed
               pr_state <= nx_state; -- once this time is over, the new state must be executed
               count := 0; -- because pr_state is a signal, its value'll be updated with the conclussion         
            else
               count := count + 1;
            end if; -- of this process, thus being synchronous
         end if;
      end if;
   end process;

----------------- Lower section of state machine: Sequential Logic -----------------
-- New state is deribed from inputs and pr_state. Output generation
   process (pr_state, i_test)
   begin
      case pr_state IS
         when E_RG =>
            o_r1<='1'; o_r2<='0'; o_y1<='0'; o_y2<='0'; o_g1<='0'; o_g2<='1';
            nx_state <= E_RY;
            if (i_test = '0') then
               time <= C_TIME_RG;
            else
               time <= C_TIME_TEST;
            end if;
         when E_RY =>
            o_r1<='1'; o_r2<='0'; o_y1<='0'; o_y2<='1'; o_g1<='0'; o_g2<='0';
            nx_state <= E_GR;
            if (i_test = '0') then
               time <= C_TIME_GR;
            else
               time <= C_TIME_TEST;
            end if;
         when E_GR =>
            o_r1<='0'; o_r2<='1'; o_y1<='0'; o_y2<='0'; o_g1<='1'; o_g2<='0';
            nx_state <= E_YR;
            if (i_test = '0') then
               time <= C_TIME_GR;
            else
               time <= C_TIME_TEST;
            end if;
         when E_YR =>
            o_r1<='0'; o_r2<='1'; o_y1<='1'; o_y2<='0'; o_g1<='0'; o_g2<='0';
            nx_state <= E_RG;
            if (i_test = '0') then
               time <= C_TIME_YR;
            else
               time <= C_TIME_TEST;
            end if;
         when E_YY =>
            o_r1<='0'; o_r2<='0'; o_y1<='1'; o_y2<='1'; o_g1<='0'; o_g2<='0';
            nx_state <= E_RY;
      end case;
   end process;
end behavoiral;
