--------------------------------------------------------------------------------
--                                 CNEA - CAE - IYC
--------------------------------------------------------------------------------
--
-- Proyecto:    1 digit counter
-- Autor:       Mariano M. Franceschetti (marianofranceschetti@cae.cnea.gov.ar).
-- Código:      V0.0.0-A0
-- Descripción: Ejemplo 4.2 del Volnei
--                  
--
--------------------------------------------------------------------------------
-- Evolución   Fecha        Revisor    Comentarios
-- 0           11/08/2023   JEA        Original.
--------------------------------------------------------------------------------


library ieee;

use ieee.std_logic_1164.all;

entity simple_counter is
port (
   --<port_name> : <direction> <type>;
   clk: in std_logic;
   o_digit: out integer range 0 to 9;
   rst: in std_logic
);
end simple_counter;
architecture behavioral of simple_counter is
   signal count_inter: integer range 0 to 10;
begin
   count: process(clk)
      --variable temp: integer range 0 to 10;
   begin
      if rising_edge(clk) then
         if (rst='0') then           
            if (count_inter < 9) then 
               count_inter <= count_inter + 1;
            else
               count_inter <= 0;
            end if;            
         else
            count_inter <= 0;
         end if;
         o_digit <= count_inter;
      end if; -- rising edge      
   end process count;
end behavioral;
