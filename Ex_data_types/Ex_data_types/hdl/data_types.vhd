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

port (
   --<port_name> : <direction> <type>;
	pi_port_name1 : IN  std_logic; -- ejemplo
   po_port_name2 : OUT std_logic_vector(1 downto 0)  -- ejemplo
   --<other_ports>;
);
end data_types;
architecture architecture_data_types of data_types is
   type t_row is array (7 downto 0) of std_logic; -- arreglo 1D
   type t_array1 is array (0 to 3) of t_row; -- arreglo 1Dx1D 
   type t_array2 is array (0 to 3) of std_logic_vector (7 downto 0); -- 1Dx1D
   type t_array3 is array (0 to 3, 7 downto 0) of std_logic; -- arreglo 2D
   -- señales, componentes, etc y declaraciones
	signal x : t_row;  -- ejemplo
	signal y : t_array1; -- ejemplo
   signal v : t_array2; -- ejemplo
   signal w : t_array3; -- ejemplo

begin
   -- cuerpo de la arquitectura
   ------------- Asignaciones legales de escalares -------------
   -- Las siguientes asignaciones de bit único (escalar) son todas válidas porque la base es común
   -- entre todos los vectores, esto es std_logic. Entonces:
   x(0) <= y(1)(2);  -- Noten 2 pares de paréntesis para la señal y que es de dimensión 1Dx1D
   x(1) <= v(2)(3);  -- 2 pares de paréntesis para v (1Dx1D)
   x(2) <= w(2,1);   -- solo un par de paréntesis para w que es de dimensión 2D
   y(1)(1) <= x(6);
   y(2)(0) <= v(0)(0);
   y(0)(0) <= w(3,3);
   w(1,1) <= x(7);
   w(3,0) <= v(0)(3);

   ------------- Asignaciones de vectores, ejemplos válidos e inválidos -------------
   x <= y(0);  -- legal, son el mismo tipo de datos, t_row
   x <= v(1);  -- ilegal, t_row contra std_logic_vector
   x <= w(2);  -- ilegal, w debe usar 2 índices
   x <= w(2, 2 downto 0);   -- ilegal, distintos tamaños de arreglos
   v(0) <= w(2, 2 downto 0);   -- ilegal, distintos tamaños
   v(0) <= w(2);  -- ilegal, w debe tener 2 índices
   y(1) <= v(3);  -- ilegal, tipos distintos t_row y std_logic_vector
   y(1)(7 downto 3) <= x(4 downto 0);  -- legal, mismos tipos, t_row y mismo tamaño
   v(1)(7 downto 3) <= v(2)(4 downto 0);  -- legal, mismo tipo y tamaño, std_logic_vector
   w(1, 5 downto 1) <= v(2)(4 downto 0);  -- ilegal, distintos tipos

end architecture_data_types;
