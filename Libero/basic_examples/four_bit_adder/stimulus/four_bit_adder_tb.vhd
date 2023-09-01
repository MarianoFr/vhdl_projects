----------------------------------------------------------------------
-- Created by Microsemi SmartDesign Tue Aug 08 14:51:31 2023
-- Testbench Template
-- This is a basic testbench that instantiates your design with basic 
-- clock and reset pins connected.  If your design has special
-- clock/reset or testbench driver requirements then you should 
-- copy this file and modify it. 
----------------------------------------------------------------------

--------------------------------------------------------------------------------
-- Company: <Name>
--
-- File: four_bit_adder_tb.vhd
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

entity four_bit_adder_tb is
end four_bit_adder_tb;

architecture behavioral of four_bit_adder_tb is

    constant SYSCLK_PERIOD : time := 100 ns; -- 10MHZ

    signal SYSCLK : std_logic := '0';
    signal NSYSRESET : std_logic := '0';

    component four_bit_adder
        -- ports
        port( 
            -- Inputs
            pi_a : in std_logic_vector(3 downto 0);
            pi_b : in std_logic_vector(3 downto 0);

            -- Outputs
            po_sum : out std_logic_vector(4 downto 0)

            -- Inouts

        );
    end component;

begin

    process
        variable vhdl_initial : BOOLEAN := TRUE;

    begin
        if ( vhdl_initial ) then
            -- Assert Reset
            NSYSRESET <= '0';
            wait for ( SYSCLK_PERIOD * 10 );
            
            NSYSRESET <= '1';
            wait;
        end if;
    end process;

    -- Clock Driver
    SYSCLK <= not SYSCLK after (SYSCLK_PERIOD / 2.0 );

    -- Instantiate Unit Under Test:  four_bit_adder
    four_bit_adder_0 : entity work.four_bit_adder
        -- port map
        port map( 
            -- Inputs
            pi_a => (others=> '0'),
            pi_b => (others=> '0'),

            -- Outputs
            po_sum => open

            -- Inouts

        );

end behavioral;

