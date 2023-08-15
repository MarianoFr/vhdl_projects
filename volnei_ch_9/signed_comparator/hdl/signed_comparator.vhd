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
-- 0           15/08/2023   JEA        Original.
--------------------------------------------------------------------------------


library ieee;
use ieee.std_logic_1164.all;

entity signed_comparator is
port (
    --<port_name> : <direction> <type>;
   port_name1 : IN  std_logic; -- example
   port_name2 : OUT std_logic_vector(1 downto 0)  -- example
    --<other_ports>;
);
end signed_comparator;
architecture behavioral of signed_comparator is
   -- signal, component etc. declarations
	signal signal_name1 : std_logic; -- example
	signal signal_name2 : std_logic_vector(1 downto 0) ; -- example

begin

   -- architecture body
end behavioral;