--------------------------------------------------------------------------------
--                                 CNEA - CAE - IYC
--------------------------------------------------------------------------------
--
-- Proyecto:    Vector Shifter
-- Autor:       Mariano M. Franceschetti (marianofranceschetti@cae.cnea.gov.ar).
-- Código:      V0.0.0-A0
-- Descripción: Chapter 9 Volnei Division algorithm 9.4 fixed point
-- Basically we multiply the divider by the maximum power of the dividend.                  
-- We compare the dividend and substract if necessary
--------------------------------------------------------------------------------
-- Evolución   Fecha        Revisor    Comentarios
-- 0           10/08/2023   JEA        Original.
--------------------------------------------------------------------------------

library IEEE;

use IEEE.std_logic_1164.all;

entity division_algorithm is
   generic(G_N: integer:=3);
   port (
      --<port_name> : <direction> <type>;
      i_a: in  integer range 0 to 15;
      i_b: in  integer range 0 to 15;
      o_div: out std_logic_vector(3 downto 0);
      o_rest: out integer range 0 to 15;
      o_err: out std_logic
   );
end division_algorithm;
architecture behavioral of division_algorithm is
begin
   ----- Error and initialization: -------
   process(i_a, i_b)
      variable temp1: integer range 0 to 15;
      variable temp2: integer range 0 to 15;
   begin
      temp1 := i_a;
      temp2 := i_b;
      if (i_b=0) then o_err <= '1';
      else o_err <= '0';
      end if;
      ----- Solution 1: step-by-step -------------------
      -- -----o_div(3)---------------------------
      -- if(temp1 >= temp2*8) then
      --    o_div(3)<='1';
      --    temp1 := temp1 - temp2*8;
      -- else o_div(3) <= '0';
      -- end if;
      -- -----o_div(2)---------------------------
      -- if(temp1 >= temp2*4) then
      --    o_div(2)<='1';
      --    temp1 := temp1 - temp2*4;
      -- else o_div(2) <= '0';
      -- end if;
      -- -----o_div(1)---------------------------
      -- if(temp1 >= temp2*2) then
      --    o_div(1)<='1';
      --    temp1 := temp1 - temp2*2;
      -- else o_div(1) <= '0';
      -- end if;
      -- -----o_div(0)---------------------------
      -- if(temp1 >= temp2) then
      --    o_div(0)<='1';
      --    temp1 := temp1 - temp2;
      -- else o_div(0) <= '0';
      -- end if;
      -- ----- Remainder: ----------------------
      -- o_rest <= temp1;
      ------ Solution 2: compact and generic -----------
      -----o_div------------------------------
      for i in G_N downto 0 loop
         if(temp1 >= temp2 * 2**i) then
            o_div(i) <= '1';
            temp1 := temp1 - temp2 * 2**i;
         else o_div(i) <= '0';
         end if;
      end loop;
      ----- Remainder: ----------------------
      o_rest <= temp1;
   end process;
end behavioral;
