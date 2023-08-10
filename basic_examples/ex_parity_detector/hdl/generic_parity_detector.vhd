--------------------------------------------------------------------------------
--                                 CNEA - CAE - IYC
--------------------------------------------------------------------------------
--
-- Proyecto:    Generic Parity Detector
-- Autor:       Mariano M. Franceschetti (marianofranceschetti@cae.cnea.gov.ar).
-- Código:      V0.0.0-A0
-- Descripción: Ejemplo 4.2 del Volnei
--                  
--
--------------------------------------------------------------------------------
-- Evolución   Fecha        Revisor    Comentarios
-- 0           10/08/2023   JEA        Original.
--------------------------------------------------------------------------------

library IEEE;

use IEEE.std_logic_1164.all;

entity generic_parity_detector is
   generic (G_N_PORTS : integer := 8);
   port (
      --<port_name> : <direction> <type>;
      i_a : IN  bit_vector(G_N_PORTS-1 downto 0);
      o_parity : OUT bit      
   );
end generic_parity_detector;
architecture behavioral of generic_parity_detector is
   -- signal, component etc. declarations	
begin   
   process(i_a)
      variable temp: bit;
   begin
      temp := '0';
      for i in i_a'range loop
         temp := temp xor i_a(i);
      end loop;
      o_parity <= temp;
   end process;
   -- architecture body
end behavioral;
