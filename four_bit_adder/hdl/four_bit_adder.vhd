--------------------------------------------------------------------------------
--                                 CNEA - CAE - IYC
--------------------------------------------------------------------------------
--
-- Proyecto:    Sumador de 4 bits con 2 entradas.
-- Autor:       Mariano Miguel Franceschetti (marianofranceschetti@cae.cnea.gov.ar).
-- Código:      V0.0.0-A0
-- Descripción: Ejemplo extraido del libro Volnei A. Pedroni Circuit Design with VHDL
--              pages 41 and 42, example 3.3   
--
--------------------------------------------------------------------------------
-- Evolución   Fecha        Revisor    Comentarios
-- 0           08/08/2023   N/S        Original.
--------------------------------------------------------------------------------

library ieee;

use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;

entity four_bit_adder is
port (
   --<port_name> : <direction> <type>;
	pi_a, pi_b : IN  signed (3 downto 0);
   po_sum : OUT signed (3 downto 0)
);
end four_bit_adder;
architecture behavioral of four_bit_adder is
   -- signal, component etc. declarations

begin
   -- architecture body
   po_sum <= pi_a + pi_b;
end behavioral;
