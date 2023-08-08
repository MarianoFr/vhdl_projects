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

library ieee;
library work;

use ieee.std_logic_1164.all;
use work.pkg_my_data_types.all;
use ieee.std_logic_arith.all; -- signed and unsigned data types
use ieee.std_logic_unsigned.all; -- allows arithmetic ops btwn logic vectors

entity data_types is
   -- Type definitions are not allowed in an entity declaration, so if we wish to 
   -- use one such definition, we must import a package defining them.
   -- With this, will be able to define multi dimensional ports for the entity.
port (
   --<port_name> : <direction> <type>;
	pi_port_name1 : IN  std_logic; -- ejemplo
   po_port_name2 : OUT std_logic_vector(1 downto 0)  -- ejemplo
   -- podemos usar entradas y salidas multidimensionales con el uso de los tipos 
   -- definidos en mis paquetes
   pi_port_array : IN t_vector_array (0 to 3); -- definicion de un puerto multidimensional usando
);                                             -- el tipo definido en pkg_my_data_types
end data_types;
architecture architecture_data_types of data_types is
   -- definiciones de usuarios
   type t_row is array (7 downto 0) of std_logic; -- arreglo 1D
   type t_array1 is array (0 to 3) of t_row; -- arreglo 1Dx1D 
   type t_array2 is array (0 to 3) of std_logic_vector (7 downto 0); -- 1Dx1D
   type t_array3 is array (0 to 3, 7 downto 0) of std_logic; -- arreglo 2D
   -- señales, componentes, etc y declaraciones
	signal x : t_row;  -- ejemplo
	signal y : t_array1; -- ejemplo
   signal v : t_array2; -- ejemplo
   signal w : t_array3; -- ejemplo
   -- signed and unsigned data types
   signal s_x : signed (7 downto 0); -- syntax definition similar to std_logic_vector
   signal u_x : unsigned (0 to 3);
   s_x <= 1 + 2; -- legal (arithmetic operation OK)
   u_x <= 1 and 2; -- illegal (logical operation not OK)
   -- The oposite happens with std_logic_vectors. Arithmetic operations are prohibited
   -- between them
   signal asd : in std_logic_vector (7 downto 0);
   signal qwe : in std_logic_vector (7 downto 0);
   signal zxc : out std_logic_vector (7 downto 0);

   zxc <= asd + qwe; -- illegal arithmetic operation between std_logic_vectors
   zxc <= asd and qwe; -- legal logic operation between std_logic_vectors

   -- Arithmetic opertions between std_logic_vectors is available when using
   -- std_logic_signed and std_logic_unsigned packages from ieee library
   zxc <= asd + qwe; -- this operation is now legal

   -- Record are arrays of different data types
   type t_birthday is record
      day : integer range 1 to 31;
      month : month_name;
   end record;

   -- Operations btwn diff types
   -- Type Convertions
   -- Per se it's not allowed, we must first convert the data types (cast)
   -- This can be achieved in two ways:
   --    -By writing a piece of code which does this
   --    -Or by including a package where this code is allocated and calling the corresponding funciton
   -- If the types are closely related, having the same base type, ieee.std_logic_1164 
   -- has a pretty straightforward way of doing so.
   -- For example:
   type long is integer range -100 to 100;
   type short is integer range -10 to 10;
   signal rty : short;
   signal fgh : long;
   y <= 2*x + 5; -- error
   y <= long(2*x + 5); -- OK, result converted to type long. Almost equal to casts in C99
   -- std_logic_arith also has a lot of conversion functions
   --    - conv_integer(p) converts a parameter p of type integer, unsigned, signed, or std_ulogic
   --      to an integer value size b bits. std_logic_vector is not allowed.
   --    - conv_unsigned(p, b) converts a parameter p of type integer, unsigned, signed, or std_ulogic
   --      to an unsigned value with size b bits.
   --    - conv_signed(p, b) converts a parameter p of type integer, unsigned, signed, or std_ulogic
   --      to a signed value with size b bits.
   --    - conv_std_logic_vector(p, b) converts a parameter p of type integer, unsigned, signed, or std_ulogic
   --      to a std_logic_vector value with size b bits.
   -- Example
   signal vb : in unsigned (7 downto 0);
   signal fg : in unsigned (7 downto 0);
   signal er : out std_logic_vector (7 downto 0);
   
   er <= conv_std_logic((vb + fg), 8); -- a + b is converted from unsigned to std_logic_vector
                                       -- and assigned to er.
   
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
