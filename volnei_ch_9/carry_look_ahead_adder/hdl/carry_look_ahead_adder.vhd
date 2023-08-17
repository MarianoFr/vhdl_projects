--------------------------------------------------------------------------------
--                                 CNEA - CAE - IYC
--------------------------------------------------------------------------------
--
-- Proyecto:    Vector Shifter
-- Autor:       Mariano M. Franceschetti (marianofranceschetti@cae.cnea.gov.ar).
-- Código:      V0.0.0-A0
-- Descripción: Volnei ch 9, carry look ahead adder
--              Its implementation is based on the generate and propagate concept
-- which gives the circuit higher speed than its carry ripple adder counterpart
-- (at the expense of more silicon area).
-- Two signals are responsible for the mentioned cocepts of propagation and generation
-- generate -> g = a and b  propagate -> p = a xor b
--------------------------------------------------------------------------------
-- Evolución   Fecha        Revisor    Comentarios
-- 0           17/08/2023   JEA        Original.
--------------------------------------------------------------------------------

library IEEE;

use IEEE.std_logic_1164.all;

entity carry_look_ahead_adder is
port (
   a, b: in std_logic_vector (3 downto 0);
   cin: in STD_LOGIC;
   s: out std_logic_vector (3 downto 0);
   cout: out STD_LOGIC
);
end carry_look_ahead_adder;
architecture architecture_carry_look_ahead_adder of carry_look_ahead_adder is
   signal c: std_logic_vector (4 downto 0);
   signal p: std_logic_vector (3 downto 0);
   signal g: std_logic_vector (3 downto 0);
begin
   ---- PGU: ---------------
G1: for i in 0 to 3 generate -- código congruente, es como escribir la misma 
   p(i) <= a(i) xor b(i);    -- sentencia 4 veces con un indice diferente
   g(i) <= a(i) and b(i);    --                                                                                                                 
   s(i) <= p(i) xor c(i);    --                                                                                                                    
   end generate;             --                                                                                    ________________________                                                                                                          
   ---- CLAU: -------------- CLAU is concurrent(parallel) with the PGU, remember                                  |     _______          __↓___
   c(0) <= cin;           -- this are interconnection between logic gates, so even                            c---*--->|       |<--c----|      |
   c(1) <= (cin and p(0)) or g(0); -- though p(i) dependant opertions from the CLAU                           i_a----->|  PGU  |---p--->| CLAU |
   c(2) <= (cin and p(0) and p(1)) or -- are executed "simultaneously", no clk used, with the PGU operations, i_b----->| Logic |---g--->|Logic |
         (g(0) and p(1)) or g(1); -- CLAU depends on the outputs from the PGU, the signals, which                      |_______|        |______|
   c(3) <= (cin and p(0) and p(1) and p(2)) or (g(0) and p(1) and p(2)) or -- have a propagation delay             
         (g(1) and p(2)) or g(2);-- inherent to the sillicone used.                                                     
   c(4) <= (cin and p(0) and p(1) and p(2) and p(3)) or
         (g(0) and p(1) and p(2) and p(3)) or
         (g(1) and p(2) and p(3)) or
         (g(2) and p(3)) or g(3);
   cout <= c(4);
end architecture_carry_look_ahead_adder;
