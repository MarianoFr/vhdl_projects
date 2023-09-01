--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   14:29:59 09/01/2023
-- Design Name:   
-- Module Name:   C:/MarianoF/vhdl_projects/ISE/Volnei/Ch9-problems/9.2/divider/divider_tb.vhd
-- Project Name:  divider
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: divider
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY divider_tb IS
END divider_tb;

ARCHITECTURE behavior OF divider_tb IS 
	constant c_ancho : integer := 7; 
   --Inputs
   signal dividend : std_logic_vector(c_ancho downto 0) := (others => '0');
   signal divider : std_logic_vector(c_ancho downto 0) := (others => '0');
 	--Outputs
   signal result : std_logic_vector(c_ancho downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name
	
	signal clk : std_logic := '0';
 
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: entity work.divider 
	generic map(G_N => c_ancho)
	PORT MAP (
          dividend => dividend,
          divider => divider,
          result => result
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin
		dividend <= "10001111";
		divider  <= "00000001";
      wait for clk_period*10;
		dividend <= "11111001";
		divider  <= "00100000";
		wait for clk_period*10;
		dividend <= "10101001";
		divider  <= "00001110";
      wait;
   end process;

END;
