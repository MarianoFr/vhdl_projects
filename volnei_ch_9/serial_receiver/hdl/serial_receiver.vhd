--------------------------------------------------------------------------------
--                                 CNEA - CAE - IYC
--------------------------------------------------------------------------------
--
-- Proyecto:    Vector Shifter
-- Autor:       Mariano M. Franceschetti (marianofranceschetti@cae.cnea.gov.ar).
-- Código:      V0.0.0-A0
-- Descripción: Ejemplo 5.6 del Volnei
--                  
--
--------------------------------------------------------------------------------
-- Evolución   Fecha        Revisor    Comentarios
-- 0           23/08/2023   JEA        Original.
--------------------------------------------------------------------------------

--The input train consists of ten bits. The first bit is a start bit, which, when
--high, must cause the circuit to start receiving data. The next seven are the
--actual data bits. The ninth bit is a parity bit, whose status must be '0' if
--the number of ones in data is even, or '1' otherwise. Finally, the tenth is a
--stop bit, which must be high if the transmission is correct. An error is
--detected when either the parity does not check or the stop bit is not a '1'.
--When reception is concluded and if no error has beendetected, then the data 
--stored in the internal registers (reg) is transferred to data(6:0) and the 
--data_valid output is asserted.

library ieee;
use ieee.std_logic_1164.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity serial_data_receiver is
	port(
		rst			: in bit;
		i_data_in 	: in bit;
		clk 			: in bit;
		o_data		: out bit_vector( 6 downto 0 );
		o_err			: out bit;
		o_data_ok   : out bit
	);
end serial_data_receiver;

architecture Behavioral of serial_data_receiver is

begin

	process(rst, clk)
		variable v_count : integer range 0 to 10; -- to count data received
		variable v_reg   : bit_vector ( 9 downto 0 ); -- dinamically store received packages
		variable v_temp  : bit;
	begin
		if ( rst = '1' ) then
		-- all to cero
			v_count   := 0;
			v_reg     := ( v_reg'range => '0' );
			v_temp    := '0';
			o_err     <= '0';
			o_data_ok <= '0';
			
		elsif ( rising_edge(clk) ) then
			if ( i_data_in = '1' and v_reg(0) = '0' ) then -- first bit detected and reception haven't started
				v_reg(0) := '1';
			elsif ( v_reg(0) = '1' ) then
				v_count := v_count + 1;
				if ( v_count < 10 ) then
					v_reg( v_count ) := i_data_in;
				elsif ( v_count = 10 ) then
					v_temp := ( v_reg(1) xor v_reg(2) xor v_reg(3) xor
									v_reg(4) xor v_reg(5) xor v_reg(6) xor
									v_reg(7) xor v_reg(8)) or not v_reg(9);
					o_err    <= v_temp;
					v_count  := 0;
					v_reg(0) := i_data_in;
					if ( v_temp = '0' ) then
						o_data_ok <= '1';
						o_data <= v_reg ( 7 downto 1 );
					end if;
				end if;
			end if;
		end if;			
	end process;

end Behavioral;

