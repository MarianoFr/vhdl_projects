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
-- 0           10/08/2023   JEA        Original.
--------------------------------------------------------------------------------


library ieee;
use ieee.std_logic_1164.all;

entity vector_shifter is
port (
   --<port_name> : <direction> <type>;
	i_vector: in  std_logic_vector(3 downto 0);
   i_sel: in integer range 0 to 4;
   o_vector: out std_logic_vector(7 downto 0)
);
end vector_shifter;
architecture behavioral of vector_shifter is
   -- signal, component etc. declarations
	subtype vector is std_logic_vector(7 downto 0);
   type matrix is array(4 downto 0) of vector;
   signal row: matrix;
begin
   -- architecture body
   row(0) <= "0000" & i_vector;
   G1: for i in 1 to 4 generate
      row(i) <= row(i-1)(6 downto 0) & '0';
   end generate;
   o_vector <= row(i_sel);
end behavioral;
