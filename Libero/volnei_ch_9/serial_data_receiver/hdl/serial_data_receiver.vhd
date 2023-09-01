--------------------------------------------------------------------------------
-- Company: <Name>
--
-- File: serial_data_receiver.vhd
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
use ieee.std_logic_arith.all; -- If working with unsigned/signed 
                              -- or needing arith ops btwn std_logic
entity serial_data_receiver is
   port (   
      i_data : in  bit;
      o_data : out bit_vector(6 downto 0);
      
   );
end serial_data_receiver;

architecture behavioral of serial_data_receiver is   
	signal signal_name1 : std_logic;
	signal signal_name2 : std_logic_vector(1 downto 0);
begin
   -- architecture body
end behavioral;
