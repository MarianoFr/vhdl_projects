----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:43:53 08/25/2023 
-- Design Name: 
-- Module Name:    ram_example - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity ram_example is
	
	generic(
		G_WORD_LEN	:	integer	:=	8; -- # of bits per memory word
		G_RAM_LEN	:	integer	:=	8  -- # of memory positions (memory size)
	);
	
	port(
		clk			:	in std_logic;  -- # general system clock
		i_wr_ena		:	in std_logic;  -- # active high write enable
		i_addr		:	in integer range 0 to G_RAM_LEN - 1; -- #  address if data to be stored/read
		i_data_in	:	in std_logic_vector(G_WORD_LEN - 1 downto 0);  -- # active high write enable
		o_data_out	:	out std_logic_vector(G_WORD_LEN - 1 downto 0)  -- # active high write enable
	);

end ram_example;

architecture Behavioral of ram_example is
	type vector_array is array(0 to G_RAM_LEN - 1) of -- defining memory matrix as an array of stdLogic vectors
		std_logic_vector(G_WORD_LEN - 1 downto 0);
	signal ram_memory : vector_array; -- the ram itself
begin

	process(clk, i_wr_ena)
	begin
		if(rising_edge(clk)) then
			if(i_wr_ena = '1') then
				ram_memory(addr) <= i_data_in;
			else
			end if;
		end if;
	end process;
	o_data_out <= memory(addr);
end Behavioral;

