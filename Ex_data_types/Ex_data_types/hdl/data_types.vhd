---------------------------------------------------------------------------------------------------
--                                 CNEA - CAE - IYC
---------------------------------------------------------------------------------------------------
--
-- Componente:  Ejemplo de data_types.
-- Autor:       Mariano Miguel Franceschetti
-- Archivo:     data_types.vhd
-- Descripcion: Ejemplos de los diferentes data types, armado durante la lectura de Volnei A. Pedroni
---------------------------------------------------------------------------------------------------
-- Revision    Fecha        Revisor    Comentarios
-- 0           07/08/2023   MMF        Original
---------------------------------------------------------------------------------------------------

library IEEE;

use IEEE.std_logic_1164.all;

entity data_types is
type row is array (7 downto 0) of std_logic; --1D array
type row is array (7 downto 0) of std_logic; --1D array
port (
    --<port_name> : <direction> <type>;
	port_name1 : IN  std_logic; -- example
    port_name2 : OUT std_logic_vector(1 downto 0)  -- example
    --<other_ports>;
);
end data_types;
architecture architecture_data_types of data_types is
   -- signal, component etc. declarations
	signal signal_name1 : std_logic; -- example
	signal signal_name2 : std_logic_vector(1 downto 0) ; -- example

begin

   -- architecture body
end architecture_data_types;
