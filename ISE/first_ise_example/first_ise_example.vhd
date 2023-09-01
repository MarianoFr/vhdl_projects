----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:56:00 08/18/2023 
-- Design Name: 
-- Module Name:    first_ise_example - Behavioral 
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

entity first_ise_example is
	port(		
		--data_in : in std_logic_vector(7 downto 0);
		led_shift_register : out std_logic_vector(7 downto 0);
		clk : in std_logic;
		rst : in std_logic
	);
end first_ise_example;

architecture Behavioral of first_ise_example is
	signal aux_led : std_logic_vector(7 downto 0);
	signal segundo : std_logic;
	signal a_out : integer;
begin

	process(clk)
	begin
		if(rising_edge(clk)) then
			if(rst = '1') then
				aux_led <= "00000001";
				led_shift_register <= "00000001";
			else
				if(segundo = '1') then		
					aux_led(7 downto 1) <= aux_led(6 downto 0);
					aux_led(0) <= aux_led(7);
				end if;
				led_shift_register <= aux_led;
			end if;				
		end if;
	end process;
	process(clk)
	begin
		if(rising_edge(clk)) then
			if(rst = '1') then
				a_out <= 0;
				segundo <= '0';
			else
				if(a_out >= 50_000_000) then
					a_out <= 0;
					segundo <= '1';
				else
					a_out <= a_out + 1;
					segundo <= '0';
				end if;
			end if;
		end if;
	end process;
end Behavioral;

