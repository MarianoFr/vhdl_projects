--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   14:58:36 08/22/2023
-- Design Name:   
-- Module Name:   C:/MarianoF/vhdl_projects/ISE/vending_machine/vending_machine_tb.vhd
-- Project Name:  vending_machine
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: vending_machine_controller
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
 
ENTITY vending_machine_tb IS
END vending_machine_tb;
 
ARCHITECTURE behavior OF vending_machine_tb IS

   --Inputs
   signal clk  : std_logic := '0';
   signal rst  : std_logic := '0';
   signal i_ni : std_logic := '0';
   signal i_di : std_logic := '0';
   signal i_qi : std_logic := '0';

 	--Outputs
   signal o_no : std_logic := '0';
   signal o_do : std_logic := '0';
   signal o_co : std_logic := '0';

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: entity work.vending_machine_controller
		port map (
          clk => clk,
          rst => rst,
          i_ni => i_ni,
          i_di => i_di,
          i_qi => i_qi,
          o_no => o_no,
          o_do => o_do,
          o_co => o_co
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
      -- hold reset state for 100 ns.
		rst <= '1';
--		o_no <= '0';
--		o_do <= '0';
--		o_co <= '0';
      wait for 100 ns;	
		rst <= '0';
      wait;
   end process;
	
	process
   begin
		wait for 110 ns;
			i_ni <= '0';
			wait for 10 ns;
CENT_5:  for i in 0 to 4 loop
				i_ni <= '1';
				wait for 150 ns;
				i_ni <= '0';
				wait for 150 ns;
			end loop;			
CENT_10: for i in 0 to 2 loop
				i_di <= '1';
				wait for 150 ns;
				i_di <= '0';
				wait for 150 ns;
			end loop;
CENT_25: for i in 0 to 1 loop
				i_qi <= '1';
				wait for 150 ns;
				i_qi <= '0';
				wait for 150 ns;				
			end loop;
			
--		else
--			o_no <= '0';
--			o_do <= '0';
--			o_co <= '0';
		wait;
   end process;

END;
