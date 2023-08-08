------------- Package -------------
library ieee;
use ieee.std_logic_1164.all;
-----------------------------------
package pkg_my_data_types is
   type t_vector_array is array (natural range<>) of -- (natural range<>) means no fixed dimension was defined
      std_logic_vector(7 downto 0);                  -- thus, when instantiating this type, the desired size
end pkg_my_data_types;                               -- can be chosen whithin the naturals,
-----------------------------------                  -- that is from 0 to +2,147,483,647
   