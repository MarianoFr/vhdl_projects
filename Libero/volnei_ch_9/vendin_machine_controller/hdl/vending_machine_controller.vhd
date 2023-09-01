--------------------------------------------------------------------------------
--                                 CNEA - CAE - IYC
--------------------------------------------------------------------------------
--
-- Proyecto:    Vector Shifter
-- Autor:       Mariano M. Franceschetti (marianofranceschetti@cae.cnea.gov.ar).
-- Código:      V0.0.0-A0
-- Descripción: Vending-machine controller from ch 9, 9.5 Volnei, 
--             this is the type of design where the FSM (finite state machine)
--             model is helpful.
--------------------------------------------------------------------------------
-- Evolución   Fecha        Revisor    Comentarios
-- 0           17/08/2023   JEA        Original.
--------------------------------------------------------------------------------

library ieee;
use ieee.std_logic_1164.all;

entity vending_machine_controller is
   port (
      clk : in std_logic;
      rst : in std_logic;
      i_ni : in  std_logic; -- Nickel in
      i_di : in  std_logic; -- Dime in
      i_qi : in  std_logic; -- Quarter in
      o_no : out  std_logic; -- Nickel out
      o_do : out  std_logic; -- Dime out
      o_co : out  std_logic -- Candy out
   );
end vending_machine_controller;

architecture behavioral of vending_machine_controller is 
   type t_sm_state is (E_0, E_5, E_10, E_15, E_20, 
                       E_25, E_30, E_35, E_40, E_45);
	signal vending_machine_state : t_sm_state;
begin
   M_PORCESS: process(clk)
   begin
      if(rising_edge(clk)) then -- Synchronous reset
         if(rst = '1') then
            vending_machine_state <= E_0;
         else
            case vending_machine_state is
               when E_0 =>
                  o_co <= '0';
                  o_no <= '0';
                  o_do <= '0';
                  if(i_ni) then
                     vending_machine_state <= E_5;
                  elsif (i_di) then
                     vending_machine_state <= E_10;
                  elsif (i_qi) then
                     vending_machine_state <= E_25;
                  else
                     vending_machine_state <= E_0;
                  end if;
               when E_5 =>
                  o_co <= '0';
                  o_no <= '0';
                  o_do <= '0';
                  if(i_ni) then
                     vending_machine_state <= E_10;
                  elsif (i_di) then
                     vending_machine_state <= E_15;
                  elsif (i_qi) then
                     vending_machine_state <= E_30;
                  else
                     vending_machine_state <= E_5;
                  end if;
               when E_10 =>
                  o_co <= '0';
                  o_no <= '0';
                  o_do <= '0';
                  if(i_ni) then
                     vending_machine_state <= E_15;
                  elsif (i_di) then
                     vending_machine_state <=E_20;
                  elsif (i_qi) then
                     vending_machine_state <=E_35;
                  else
                     vending_machine_state <= E_10;
                  end if;
               when E_15 =>
                  o_co <= '0';
                  o_no <= '0';
                  o_do <= '0';
                  if(i_ni) then
                     vending_machine_state <= E_20;
                  elsif (i_di) then
                     vending_machine_state <=E_25;
                  elsif (i_qi) then
                     vending_machine_state <=E_40;
                  else
                     vending_machine_state <= E_15;
                  end if;
               when E_20 =>
                  o_co <= '0';
                  o_no <= '0';
                  o_do <= '0';
                  if(i_ni) then
                     vending_machine_state <= E_25;
                  elsif (i_di) then
                     vending_machine_state <=E_30;
                  elsif (i_qi) then
                     vending_machine_state <=E_45;
                  else
                     vending_machine_state <= E_20;
                  end if;
               when E_25 =>
                  o_co <= '1';
                  o_no <= '0';
                  o_do <= '0';
                  vending_machine_state <= E_0;                  
               when E_30 =>
                  o_co <= '1';
                  o_no <= '1';
                  o_do <= '0';
                  vending_machine_state <= E_0;
               when E_35 =>
                  o_co <= '1';
                  o_no <= '0';
                  o_do <= '1';
                  vending_machine_state <= E_0;                  
               when E_40 =>
                  o_co <= '1';
                  o_no <= '1';
                  o_do <= '1';
                  vending_machine_state <= E_0;
               when E_45 =>
                  o_co <= '0';
                  o_no <= '0';
                  o_do <= '1';
                  vending_machine_state <= E_35;
            end case; -- vending_machine_state
         end if; -- rst
      end if; -- rising_edge(clk)
   end process M_PORCESS;
end behavioral;
