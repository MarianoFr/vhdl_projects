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



library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;

entity ram_example_tb is
   generic (
      G_WORD_LEN: integer := 8; -- number of bits per word
      G_WORDS: integer := 16    -- number of words in memory
   );
end ram_example_tb;

architecture behavioral of ram_example_tb is

   constant SYSCLK_PERIOD : time := 100 ns; -- 10MHZ
   signal SYSCLK: std_logic := '0';
   signal i_addr: integer range 0 to G_WORDS-1 := 0;
   signal i_data: std_logic_vector(G_WORD_LEN-1 downto 0) := "00110011";
   signal o_data: std_logic_vector(G_WORD_LEN-1 downto 0);

begin   
   -- Clock Driver
   SYSCLK <= not SYSCLK after (SYSCLK_PERIOD / 2.0 );

   process(SYSCLK)
      variable i: integer range 0 to G_WORD_LEN-1 := 0;
   begin
      if(rising_edge(SYSCLK)) then
         i := i+1;
         i_addr <= i_addr + 1;
      end if;
   end process;


   -- Instantiate Unit Under Test:  ram_example
   uut: entity work.ram_example
      -- port map
      port map( 
         -- Inputs
         i_wr_ena => '1',
         clk => SYSCLK,
         i_addr => i_addr,
         i_data => i_data,
         -- Outputs
         o_data => o_data

      );

end behavioral;

