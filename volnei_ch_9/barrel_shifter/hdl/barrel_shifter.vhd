--------------------------------------------------------------------------------
--                                 CNEA - CAE - IYC
--------------------------------------------------------------------------------
--
-- Proyecto:    Barrel Shifter
-- Autor:       Mariano M. Franceschetti (marianofranceschetti@cae.cnea.gov.ar).
-- Código:      V0.0.0-A0
-- Descripción: Example 9.1 del Volnei
--                  
--
--------------------------------------------------------------------------------
-- Evolución   Fecha        Revisor    Comentarios
-- 0           15/08/2023   JEA        Original.
--------------------------------------------------------------------------------

library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;

entity barrel_shifter is
port (
   input: in  std_logic_vector(7 downto 0);
   shift: in  std_logic_vector(2 downto 0);
   output: out  std_logic_vector(7 downto 0)
);
end barrel_shifter;
architecture behavioral of barrel_shifter is	
begin
   process(input, shift)
      variable temp_1 : std_logic_vector(7 downto 0);
      variable temp_2 : std_logic_vector(7 downto 0);
      ---------------1st shifter---------------
   begin
      if (shift(0) = '0') then
         temp_1 := input;
      else
         temp_1(0) := '0';
         for i in 1 to input'high loop
            temp_1(i) := input(i-1);
         end loop; 
      end if;
      ---------------2nd shifter---------------
      if (shift(1) = '0') then
         temp_2 := temp_1;
      else
         for i in 0 to 1 loop
            temp_2(i) := '0';
         end loop;
         for i in 2 to input'high loop
            temp_2(i) := temp_1(i-2);
         end loop;
      end if;
      ---------------3rd shifter---------------
      if(shift(2) = '0') then
         output <= temp_2;
      else
         for i in 0 to 3 loop
            output(i) <= '0';
         end loop;
         for i in 4 to input'high loop
            output(i) <= temp_2(i-4);
         end loop;   
      end if;
   end process;
end behavioral;