--------------------------------------------------------------------------------
--                                 CNEA - CAE - IYC
--------------------------------------------------------------------------------
--
-- Proyecto:    String Detector
-- Autor:       Mariano M. Franceschetti (marianofranceschetti@cae.cnea.gov.ar).
-- Código:      V0.0.0-A0
-- Descripción: Ejemplo 8.4 del Volnei
--                  
--
--------------------------------------------------------------------------------
-- Evolución   Fecha        Revisor    Comentarios
-- 0           15/08/2023   JEA        Original.
--------------------------------------------------------------------------------
--               _ 
--              ↓ |i_d=0
--            ------      i_d=1    -----
--   rst ---►| ZERO |------------►| ONE |
--           | o_q=1|◄------------|o_q=1|
--            ------ ◄-    i_d=0   -----
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

entity string_detector is
   port (
      i_d: in  bit; -- example
      clk: in bit;
      rst: in bit;
      o_q: out bit
   );
end string_detector;
architecture behavoiral of string_detector is
   type t_state is (zero, one, two, three);
   signal pr_state, nx_state: t_state;
begin
----- Lower section: --------------------
PROCESS (rst, clk)
BEGIN
   IF (rst='1') THEN
      pr_state <= zero;
   ELSIF (rising_edge(clk)) THEN
      pr_state <= nx_state;
   END IF;
END PROCESS;
---------- Upper section: ---------------
PROCESS (i_d, pr_state)
BEGIN
   CASE pr_state IS
      WHEN zero =>
         o_q <= '0';
         IF (i_d='1') THEN nx_state <= one;
         ELSE nx_state <= zero;
         END IF;
      WHEN one =>
         o_q <= '0';
         IF (i_d='1') THEN nx_state <= two;
         ELSE nx_state <= zero;
         END IF;
      WHEN two =>
         o_q <= '0';
         IF (i_d='1') THEN nx_state <= three;
         ELSE nx_state <= zero;
         END IF;
      WHEN three =>
         o_q <= '1';
         IF (i_d='0') THEN nx_state <= zero;
         ELSE nx_state <= three;
         END IF;
   END CASE;
END PROCESS;
end behavoiral;
