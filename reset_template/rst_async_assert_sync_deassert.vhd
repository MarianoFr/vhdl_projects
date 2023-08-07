---------------------------------------------------------------------------------------------------
--                                 CNEA - CAE - IYC
---------------------------------------------------------------------------------------------------
--
-- Componente:  Modulo de sincronizacion de la senial de reset asincronica.
-- Autor:       Franco N. Ferrucci
-- Archivo:     rst_async_assert_sync_deassert.vhd
-- Descripcion: Implementacion del sincronizador propuesto por Cristian Sisterna
--              en su blog: "http://www.c7t-hdl.com/Docs/C7T_NT10_Reset_VHDL_FPGA.pdf".
---------------------------------------------------------------------------------------------------
-- Revision    Fecha        Revisor    Comentarios
-- 0           30/05/2012   GER        Original
-- 1           30/11/2022   GER        Interfaz con prefijos segun IT-167
---------------------------------------------------------------------------------------------------

library ieee;
use ieee.std_logic_1164.all;

entity rst_async_assert_sync_deassert is
   generic(
      RST_WIDTH           : integer   := 8;
      RST_ACTIVE_VALUE    : std_logic := '1'
   );
   port(
      clk         : in  std_logic;
      i_rst_async   : in  std_logic;
      o_rst_out     : out std_logic
   );
end rst_async_assert_sync_deassert;

architecture Behavioral of rst_async_assert_sync_deassert is
    
   signal reset_vector : std_logic_vector(RST_WIDTH-1 downto 0);
    
begin
   process(clk,i_rst_async)
   begin
      if i_rst_async = '1' then
         reset_vector <= (others => RST_ACTIVE_VALUE);
      elsif rising_edge(clk) then
         reset_vector(0) <= not(RST_ACTIVE_VALUE);
         for i in 1 to RST_WIDTH-1 loop         
            reset_vector(i) <= reset_vector(i-1);
         end loop;
      end if;
   end process;

-- Salida:    
   o_rst_out <= reset_vector(RST_WIDTH-1);             
    
end Behavioral;