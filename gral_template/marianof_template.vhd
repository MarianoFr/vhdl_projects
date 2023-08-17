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
use ieee.std_logic_arith.all; -- If working with unsigned/signed 
                              -- or needing arith ops btwn std_logic
entity marianof_template is
   port (   
      port_name1 : in  std_logic;
      port_name2 : out std_logic_vector(1 downto 0)
   );
end marianof_template;

architecture behavioral of marianof_template is   
	signal signal_name1 : std_logic;
	signal signal_name2 : std_logic_vector(1 downto 0);
begin
   -- architecture body
end behavioral;