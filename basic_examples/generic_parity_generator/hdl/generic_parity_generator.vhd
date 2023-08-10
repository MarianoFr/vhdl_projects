--------------------------------------------------------------------------------
--                                 CNEA - CAE - IYC
--------------------------------------------------------------------------------
--
-- Proyecto:    Generic Parity Generator
-- Autor:       Mariano M. Franceschetti (marianofranceschetti@cae.cnea.gov.ar).
-- Código:      V0.0.0-A0
-- Descripción: Ejemplo 4.3 del Volnei
--                  
--
--------------------------------------------------------------------------------
-- Evolución   Fecha        Revisor    Comentarios
-- 0           10/08/2023   JEA        Original.
--------------------------------------------------------------------------------

library IEEE;

use IEEE.std_logic_1164.all;

entity generic_parity_generator is
   generic (G_N_PORTS : integer := 8);
   port (
      --<port_name> : <direction> <type>;
      i_a : in bit_vector (G_N_PORTS - 1 downto 0);
      o_with_parity : OUT bit_vector(G_N_PORTS downto 0)   -- The parity extra bit is added, thus we have one extra bit
   );
end generic_parity_generator;
architecture behavioral of generic_parity_generator is
   -- signal, component etc. declarations
begin
   -- architecture body
   process (i_a)
      variable temp1: bit;
      variable temp2: bit_vector(o_with_parity'range);
   begin
      temp1 := '0';
      for i in i_a'range loop
         temp1 := temp1 xor i_a(i);
         temp2(i) := i_a(i);
      end loop;
      temp2(o_with_parity'high) := temp1;
      o_with_parity <= temp2;
   end process;
end behavioral;
