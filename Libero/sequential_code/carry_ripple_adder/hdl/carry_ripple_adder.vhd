--------------------------------------------------------------------------------
--                                 CNEA - CAE - IYC
--------------------------------------------------------------------------------
--
-- Proyecto:    Carry Ripple Adder
-- Autor:       Mariano M. Franceschetti (marianofranceschetti@cae.cnea.gov.ar).
-- Código:      V0.0.0-A0
-- Descripción: Ejemplo 6.8 del Volnei
--                  
--
--------------------------------------------------------------------------------
-- Evolución   Fecha        Revisor    Comentarios
-- 0           14/08/2023   JEA        Original.
--------------------------------------------------------------------------------
--                   -----
-- i_a(7:0) =======►|     |====►o_s(7:0)
-- i_b(7:0) =======►|  +  |
-- i_cin-----------►|     |----►o_c
--                   -----
--               -----                     -----                       -----
-- i_a(0) -----►|     |==►o_s(0) i_a(1)--►|     |==►o_s(1)...i_a(7)--►|     |===►o_s(7)
-- i_b(0) =====►|  +  |          i_b(1)==►|  +  |         ...i_b(7)==►|  +  |
-- c(0)=i_cin--►|     |--►c(1)-----------►|     |--►c(2)- ... c(7)---►|     |----►c(8)
--               -----                     -----                       -----
                
library ieee;

use ieee.std_logic_1164.all;

entity carry_ripple_adder is
   GENERIC (G_LEN : INTEGER := 8);
port (
   --<port_name> : <direction> <type>;
	i_a : in  std_logic_vector(G_LEN - 1 downto 0);
   i_b : in  std_logic_vector(G_LEN - 1 downto 0);
   i_c : in std_logic;
   o_s : out std_logic_vector(G_LEN - 1 downto 0);
   o_c : out std_logic
);
end carry_ripple_adder;
architecture behavioral of carry_ripple_adder is

begin

   sum_loop : process(i_a, i_b, i_c)
      variable carry : std_logic_vector(G_LEN downto 0);
   begin
      carry(0) := i_c;
      for i in 0 to G_LEN-1 loop
         o_s(i) <= i_a(i) xor i_b(i) xor carry(i);
         carry(i+1) := (i_a(i) and i_b(i)) 
                        or (i_a(i) and carry(i))
                        or (i_b(i) and carry(i));
      end loop;
      o_c <= carry(G_LEN);
   end process sum_loop;
   
end behavioral;
