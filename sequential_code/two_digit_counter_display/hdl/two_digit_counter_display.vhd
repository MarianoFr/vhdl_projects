--------------------------------------------------------------------------------
--                                 CNEA - CAE - IYC
--------------------------------------------------------------------------------
--
-- Proyecto:    Two digit counter with seven segments display
-- Autor:       Mariano M. Franceschetti (marianofranceschetti@cae.cnea.gov.ar).
-- Código:      V0.0.0-A0
-- Descripción: Ejemplo 6.7 del Volnei
--                  
--
--------------------------------------------------------------------------------
-- Evolución   Fecha        Revisor    Comentarios
-- 0           11/08/2023   JEA        Original.
--------------------------------------------------------------------------------


library ieee;
use ieee.std_logic_1164.all;


entity two_digit_counter_display is
   port (
      clk: in std_logic;
      rst: in std_logic;
      o_digit_1: out std_logic_vector(6 downto 0);
      o_digit_2: out std_logic_vector(6 downto 0)
   );
end two_digit_counter_display;

architecture behavioral of two_digit_counter_display is      
begin
   counting: process(clk, rst)
      variable temp1: integer range 0 to 10;
      variable temp2: integer range 0 to 10;
   begin      
      -------Counter-------
      if(rst = '1') then
         temp1 := 0;
         temp2 := 0;
      elsif rising_edge(clk) then
         temp1 := temp1 + 1;
         if temp1 = 10 then
            temp1 := 0;
            temp2 := temp2 + 1;
            if temp2 = 10 then
               temp2 := 0;
            end if;
         end if; --temp1=10     
      end if; -- rst 
      -------Display-------
      case temp1 is
         when 0 => o_digit_1 <= "1111110"; -- "7E"
         when 1 => o_digit_1 <= "0110000"; -- "30"
         when 2 => o_digit_1 <= "1101101"; -- "6D"
         when 3 => o_digit_1 <= "1111001"; -- "79"
         when 4 => o_digit_1 <= "0110011"; -- "33"
         when 5 => o_digit_1 <= "1011011"; -- "5B"
         when 6 => o_digit_1 <= "1011111"; -- "5F"
         when 7 => o_digit_1 <= "1110000"; -- "70"
         when 8 => o_digit_1 <= "1111111"; -- "7F"
         when 9 => o_digit_1 <= "1111011"; -- "7B"
         when others => null;
      end case;
      case temp2 is
         when 0 => o_digit_2 <= "1111110"; -- "7E"
         when 1 => o_digit_2 <= "0110000"; -- "30"
         when 2 => o_digit_2 <= "1101101"; -- "6D"
         when 3 => o_digit_2 <= "1111001"; -- "79"
         when 4 => o_digit_2 <= "0110011"; -- "33"
         when 5 => o_digit_2 <= "1011011"; -- "5B"
         when 6 => o_digit_2 <= "1011111"; -- "5F"
         when 7 => o_digit_2 <= "1110000"; -- "70"
         when 8 => o_digit_2 <= "1111111"; -- "7F"
         when 9 => o_digit_2 <= "1111011"; -- "7B"
         when others => null;
      end case;     
   end process counting; --process clk,rst
end behavioral;