----------------------------------------------------------------------
-- Created by Microsemi SmartDesign Thu Aug 17 14:49:05 2023
-- Testbench Template
-- This is a basic testbench that instantiates your design with basic 
-- clock and reset pins connected.  If your design has special
-- clock/reset or testbench driver requirements then you should 
-- copy this file and modify it. 
----------------------------------------------------------------------

--------------------------------------------------------------------------------
-- Company: <Name>
--
-- File: vending_machine_controller_tb.vhd
-- File history:
--      <Revision number>: <Date>: <Comments>
--      <Revision number>: <Date>: <Comments>
--      <Revision number>: <Date>: <Comments>
--
-- Description: 
--
-- <Description here>
--
-- Targeted device: <Family::ProASIC3> <Die::A3P1000> <Package::208 PQFP>
-- Author: <Name>
--
--------------------------------------------------------------------------------


library ieee;
use ieee.std_logic_1164.all;

entity vending_machine_controller_tb is
end vending_machine_controller_tb;

architecture behavioral of vending_machine_controller_tb is

   constant C_SYSCLK_PERIOD : time := 100 ns; -- 10MHZ

   signal clk : std_logic := '0';
   signal rst : std_logic := '0';
   signal ni : std_logic := '0';
   signal di : std_logic := '0';
   signal qi : std_logic := '0';
   signal co : std_logic := '0';
   signal no : std_logic := '0';
   signal do : std_logic := '0';

begin

   

   process      
   begin
      if ( not rst ) then
         ni <= '1';
         wait for ( C_SYSCLK_PERIOD * 2 );
         ni <= '1';
         wait for ( C_SYSCLK_PERIOD * 2 );
         di <= '1';
         wait for ( C_SYSCLK_PERIOD * 2 );
         ni <= '1';
         wait for ( C_SYSCLK_PERIOD * 2 );
         qi <= '1';
         wait for ( C_SYSCLK_PERIOD * 2 );
         di <= '1';
         wait for ( C_SYSCLK_PERIOD * 2 );
         di <= '1';
         wait for ( C_SYSCLK_PERIOD * 2 );
         qi <= '1';
      end if;
   end process;

   -- Clock Driver
   clk <= not clk after (C_SYSCLK_PERIOD / 2.0 );

   -- Instantiate Unit Under Test:  vending_machine_controller
   uut: entity work.vending_machine_controller
      -- port map
      port map( 
         -- Inputs
         clk => clk,
         rst => rst,
         i_ni => ni,
         i_di => di,
         i_qi => qi,
         -- Outputs
         o_no =>  no,
         o_do =>  do,
         o_co =>  co
      );

end behavioral;

