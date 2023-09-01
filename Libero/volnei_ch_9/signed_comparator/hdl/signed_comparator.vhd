--------------------------------------------------------------------------------
--                                 CNEA - CAE - IYC
--------------------------------------------------------------------------------
--
-- Proyecto:    Sgined Comparator
-- Autor:       Mariano M. Franceschetti (marianofranceschetti@cae.cnea.gov.ar).
-- Código:      V0.0.0-A0
-- Descripción: Ejemplo 9.2 del Volnei
--                  
--
--------------------------------------------------------------------------------
-- Evolución   Fecha        Revisor    Comentarios
-- 0           17/08/2023   JEA        Original.
--------------------------------------------------------------------------------


library ieee;
use ieee.std_logic_1164.all;
USE ieee.std_logic_arith.all; -- necessary!

entity signed_comparator is
   generic (G_N: integer := 7);
   port (
      i_a: in signed (G_N downto 0);
      i_b: in signed (G_N downto 0);
      o_x1: out std_logic;
      o_x2: out std_logic;
      o_x3: out std_logic
   );
end signed_comparator;

architecture behavioral of signed_comparator is

begin
   o_x1 <= '1' WHEN i_a > i_b ELSE '0';
   o_x2 <= '1' WHEN i_a = i_b ELSE '0';
   o_x3 <= '1' WHEN i_a < i_b ELSE '0';
end behavioral;