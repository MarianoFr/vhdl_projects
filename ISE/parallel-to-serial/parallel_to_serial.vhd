----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:24:48 08/25/2023 
-- Design Name: 
-- Module Name:    parallel_to_serial - Behavioral 
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

entity parallel_to_serial is
	port(
		d	  : in std_logic_vector (7 downto 0);
		clk  : in std_logic;
		load : in std_logic;
		dout : out std_logic
	);
end parallel_to_serial;

architecture Behavioral of parallel_to_serial is
	signal internal_reg : std_logic_vector (7 downto 0);
begin
	process (clk)
		begin
		if(rising_edge(clk)) then
			if(load = '1') then
				internal_reg <= d;
			else 
				internal_reg <= reg(6 downto 0) & '0';
			end if;
		end if;
	end process;
	dout <= reg(7);
end Behavioral;

