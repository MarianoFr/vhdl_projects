--------------------------------------------------------------------------------
--                                 CNEA - CAE - IYC
--------------------------------------------------------------------------------
--
-- Proyecto:    Simple ALU
-- Autor:       Mariano M. Franceschetti (marianofranceschetti@cae.cnea.gov.ar).
-- Código:      V0.0.0-A0
-- Descripción: Ejemplo 5.5 del Volnei
--                  
--
--------------------------------------------------------------------------------
-- Evolución   Fecha        Revisor    Comentarios
-- 0           10/08/2023   JEA        Original.
--------------------------------------------------------------------------------
--                       ---------
-- i_a(7:0) ====*======►|  Logic  |======
-- i_b(7:0) =*==((=====►|  Unit   |     ||
--           || ||       ---------      ||     |\
--           || ||           ▲            ====►|  \
--           || ||  *========*                 |Mux|===► y(7:0)
--           || || ||                    =====►|  /
--           || || ||    ---------      ||     |/▲
--           ||  *=((==►|  Arith  |======        |
--            *====((==►|  Unit   |              | 
-- i_cin-----------((--►|         |              |sel(3)
--                 ||    ---------               |
--                 ||        ▲         sel(3)    |
-- sel(3:0)========*=========*-------------------*
library ieee;

use ieee.std_logic_1164.all;
USE ieee.std_logic_unsigned.all;

entity alu is
port (
   --<port_name> : <direction> <type>;
	i_a: in std_logic_vector(7 downto 0);
   i_b: in std_logic_vector(7 downto 0);
   sel: in std_logic_vector(3 downto 0);
   i_cin: in std_logic;
   o_y: out std_logic_vector(7 downto 0)
);
end alu;
architecture behavioral of alu is
   -- signal, component etc. declarations
	signal arith: std_logic_vector(7 downto 0);
	signal logic: std_logic_vector(7 downto 0);
begin
   -- Arithmetic Unit
   with sel(2 downto 0) select
      arith <= i_a when "000",
               i_a + 1 when "001",
               i_a - 1 when "010",
               i_b when "011",
               i_b + 1 when "100",
               i_b - 1 when "101",
               i_a + i_b when "110",
               i_a + i_b + i_cin when others;
   
   -- Logic Unit
   with sel(2 downto 0) select
      logic <= not i_a when "000",
               not i_b when "001",
               i_a and i_b when "010",
               i_a or i_b when "011",
               i_a nand i_b when "100",
               i_a nor i_b when "101",
               i_a xor i_b when "110",
               not(i_a xor i_b) when others;
   
   -- Mux
   with sel(3) select
      o_y <= arith when '0',
           logic when others;

end behavioral;
