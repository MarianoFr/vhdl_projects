--------------------------------------------------------------------------------
--                                 CNEA - CAE - IYC
--------------------------------------------------------------------------------
--
-- Proyecto:    RAM example
-- Autor:       Mariano M. Franceschetti (marianofranceschetti@cae.cnea.gov.ar).
-- Código:      V0.0.0-A0
-- Descripción: Ejemplo 6.11 del Volnei
--                  
--
--------------------------------------------------------------------------------
-- Evolución   Fecha        Revisor    Comentarios
-- 0           14/08/2023   JEA        Original.
--------------------------------------------------------------------------------
--               -----------
--              |    RAM    |
--              |  -------  |
-- data in ====►| | word0 | |====►data_out
-- addr =======►| |-------| |
--              | | word1 | |
--              | |-------| |
--              | | word2 | |
--              | |-------| |
-- clk---------►| |  ...  | |
-- wr ena------►|  -------  |
--               -----------

library IEEE;

use IEEE.std_logic_1164.all;
use ieee.std_logic_unsigned.all;

entity ram_example is

   generic (
      G_WORD_LEN: integer := 8; -- number of bits per word
      G_WORDS: integer := 16    -- number of words in memory
   );

   port (
      i_wr_ena: in std_logic;
      clk: in std_logic;
      i_addr: in integer range 0 to G_WORDS-1;
      i_data: in std_logic_vector(G_WORD_LEN-1 downto 0);
      o_data: out std_logic_vector(G_WORD_LEN-1 downto 0)
   );

end ram_example;

architecture behavioral of ram_example is
   
   type vector_array is array (0 to G_WORD_LEN -1) of
      std_logic_vector (G_WORD_LEN-1 downto 0);
   signal memory: vector_array;

begin

   implement: process(clk, i_wr_ena)
   begin
      if(i_wr_ena='1') then
         if(rising_edge(clk)) then
            memory(i_addr) <= i_data;
         end if;
      end if;
   end process implement;

   o_data <= memory(i_addr);

end behavioral;
