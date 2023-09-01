----------------------------------------------------------------------
-- Created by Microsemi SmartDesign Mon Aug 14 10:56:24 2023
-- Testbench Template
-- This is a basic testbench that instantiates your design with basic 
-- clock and reset pins connected.  If your design has special
-- clock/reset or testbench driver requirements then you should 
-- copy this file and modify it. 
----------------------------------------------------------------------

--------------------------------------------------------------------------------
-- Company: <Name>
--
-- File: carry_ripple_adder_tb.vhd
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

entity carry_ripple_adder_tb is
   GENERIC (G_LEN : INTEGER := 8);
end carry_ripple_adder_tb;

architecture behavioral of carry_ripple_adder_tb is

   signal i_a : std_logic_vector(G_LEN - 1 downto 0);
   signal i_b : std_logic_vector(G_LEN - 1 downto 0);
   signal i_c : std_logic;
   signal o_s : std_logic_vector(G_LEN - 1 downto 0);
   signal o_c : std_logic;

begin

   i_a <= "10011101";
   i_b <= "00010001";
   i_c <= '1';

   -- Instantiate Unit Under Test:  carry_ripple_adder
   -- Instantiate Unit Under Test:  simple_counter
   uut: entity work.carry_ripple_adder
      -- port map
      port map( 
         i_a => i_a,
         i_b => i_b,
         i_c => i_c,
         o_s => o_s,
         o_c => o_c
      );

end behavioral;

