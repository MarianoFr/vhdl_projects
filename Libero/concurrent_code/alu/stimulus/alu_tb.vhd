--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   10:51:31 08/11/2023
-- Design Name:   
-- Module Name:   C:/Users/Administrador/Desktop/trash/prueba1/aaa/Alu_TB.vhd
-- Project Name:  aaa
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: alu
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
 
ENTITY Alu_TB IS
END Alu_TB;
 
ARCHITECTURE behavior OF Alu_TB IS 

   --Inputs
   signal i_a : std_logic_vector(7 downto 0) := (others => '0');
   signal i_b : std_logic_vector(7 downto 0) := (others => '0');
   signal sel : std_logic_vector(3 downto 0) := (others => '0');
   signal i_cin : std_logic := '0';

 	--Outputs
   signal o_y : std_logic_vector(7 downto 0);
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: entity work.alu PORT MAP 
      (
          i_a => i_a,
          i_b => i_b,
          sel => sel,
          i_cin => i_cin,
          o_y => o_y
        );


 

   -- Stimulus process
   stim_proc: process
   begin		

   i_a <= x"FF";
   i_b <= x"00";
   sel <= b"1111";
   i_cin <= '0';
   wait for 1 us;
   
   i_a <= x"00";
   i_b <= x"FF";
   sel <= b"0101";
   i_cin <= '1';
      -- insert stimulus here 

   wait for 1 us;
   
   i_a <= x"AA";
   i_b <= x"55";
   sel <= b"1100";
   i_cin <= '0';
      -- insert stimulus here 

      wait;
   end process;

END;
