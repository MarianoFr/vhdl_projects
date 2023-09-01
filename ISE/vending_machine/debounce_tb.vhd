--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:26:11 08/23/2023
-- Design Name:   
-- Module Name:   C:/MarianoF/vhdl_projects/ISE/vending_machine/debounce_tb.vhd
-- Project Name:  vending_machine
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: debounce
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
 
ENTITY debounce_tb IS
END debounce_tb;
 
ARCHITECTURE behavior OF debounce_tb IS    

   --Inputs
   signal clk : std_logic := '0';
   signal rst : std_logic := '0';
   signal i_trig : std_logic := '0';

 	--Outputs
   signal o_stale : std_logic;

   -- Clock period definitions
   constant clk_period : time := 20 ns;
 
BEGIN	

	uut: entity work.debounce
    port map( 
			clk     => clk,
         rst     => rst,
         i_trig  => i_trig,
         o_stale => o_stale
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
		rst <= '1';		
		i_trig <= '0';
      wait for 10*clk_period;
		rst <= '0';
		for i in 0 to 10 loop
				
		
			-- insert stimulus here 
			wait for 20*clk_period;
			i_trig <= '1';
			wait for 20*clk_period;
			i_trig <= '0';
		
		end loop;
      wait;
   end process;

END;
