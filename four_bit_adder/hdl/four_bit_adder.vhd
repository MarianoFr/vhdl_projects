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
-- use ieee.std_logic_arith.all;
use ieee.numeric_bit.aLL;

entity four_bit_adder is
   generic (
      G_N : natural range 1 to natural'HIGH := 1 
   );
port (
   --<port_name> : <direction> <type>;
	pi_a, pi_b : IN  signed (G_N-1 downto 0);
   po_sum : OUT signed (G_N downto 0)
);
end four_bit_adder;
architecture behavioral of four_bit_adder is
   -- signal, component etc. declarations

begin
   -- architecture body
   po_sum <= resize(pi_a, G_N) + resize(pi_b, G_N);
end behavioral;
