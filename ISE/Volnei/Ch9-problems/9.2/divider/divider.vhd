----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:41:54 09/01/2023 
-- Design Name: 
-- Module Name:    divider - Behavioral 
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
library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;

entity divider is	
	generic ( G_N : integer := 3);--size of inputs is G_N+1
	port ( 
		dividend : in  std_logic_vector ( G_N DOWNTO 0 );
		divider  : in  std_logic_vector ( G_N DOWNTO 0 );
		result   : out std_logic_vector ( G_N DOWNTO 0 )
	);
end divider;

architecture behavioral of divider is
	subtype long is std_logic_vector ( 2*G_N DOWNTO 0 );
	type vec_array IS ARRAY ( G_N DOWNTO 0 ) OF long;
	signal aux_dividend : vec_array;
	signal aux_divider  : vec_array;
begin
	-- auxiliary vectors, for comparing dividend to powers of 
	-- divider, we pad the dividend with leading zeros.
	-- Generate powers of the divider. If the size of the input is
	-- G_N + 1, we shift to the left by G_N places, G_N - 1 and
	-- so on till 0, obtaining a G_N + 1 sized vector array
	aux_divider(0)  <= divider & (G_N-1 downto 0 => '0');
	aux_dividend(0) <= (G_N-1 downto 0 => '0') & dividend;
	result(0) <= '1' when (aux_dividend(3) > 0 and aux_divider(3) <= aux_dividend(3)) else '0';
G1:for i in 1 to G_N generate
		aux_divider(i) <= '0' & aux_divider(i-1)(2*G_N downto 1);
		aux_dividend(i) <= aux_dividend(i-1) - aux_divider(i-1) when (aux_divider(i-1) <= aux_dividend(i-1)) else aux_dividend(i-1);
		result(G_N-i+1) <= '1' when (aux_divider(i-1) <= aux_dividend(i-1)) else '0';		
	end generate;--G1
	
end behavioral;

