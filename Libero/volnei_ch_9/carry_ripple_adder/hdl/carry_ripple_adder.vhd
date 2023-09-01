--------------------------------------------------------------------------------
--                                 CNEA - CAE - IYC
--------------------------------------------------------------------------------
--
-- Proyecto:    Vector Shifter
-- Autor:       Mariano M. Franceschetti (marianofranceschetti@cae.cnea.gov.ar).
-- Código:      V0.0.0-A0
-- Descripción: 9.3 Section of Volnei, carry ripple adder and carry ahead. Both 
--              are different techniques to attain the same functionality, 
--              but the first one requires less hardware, while the second one
--              is faster.
--------------------------------------------------------------------------------
-- Evolución   Fecha        Revisor    Comentarios
-- 0           17/08/2023   JEA        Original.
--------------------------------------------------------------------------------
-- o_s = i_a XOR i_b XOR i_c
-- o_c = (i_a AND i_b) or (i_a AND i_c) or (i_b AND i_c)
library ieee;
use ieee.std_logic_1164.all;

entity carry_ripple_adder is
   generic(G_N: integer:=4); --vector size of sum operands
   port (
      i_a: in std_logic_vector(G_N-1 DOWNTO 0);
      i_b: in std_logic_vector(G_N-1 downto 0);
      i_c: in std_logic;
      o_s: out std_logic_vector(G_N-1 DOWNTO 0);
      o_c: out std_logic
   );
end carry_ripple_adder;

architecture behavioral of carry_ripple_adder is
   signal c: std_logic_vector(G_N DOWNTO 0);
begin
   c(0) <= i_c;
   G1: for i in 0 to G_N-1 generate
      o_s(i) <= i_a(i) xor i_b(i) xor c(i);
      c(i+1) <= (i_a(i) and i_b(i)) or
                  (i_a(i) and c(i)) or
                  (i_b(i) and c(i));
   end  generate G1;
   o_c <= c(G_N);
end behavioral;