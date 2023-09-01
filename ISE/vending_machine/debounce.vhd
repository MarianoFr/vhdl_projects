--------------------------------------------------------------------------------
--                          CNEA - CAE - IYC                                  --
--------------------------------------------------------------------------------
-- Diseño         : contadordes(RTL)
-- Nombre Archivo : ContadorDes.vhd
-- Descripción    : Cuenta en forma descendente.
-- Nota           :
-- Limitaciones   :
-- Errores        : Ninguno
-- Dependencias   : ieee.std_logic_1164
--                  ieee.numeric_std.all
-- Autor          : Andrés Cervantes (acervantes@cae.cnea.gov.ar).
--------------------------------------------------------------------------------
-- Revisión Fecha       Revisor  Comentarios
-- 0        14/06/2019  AC       Original
--------------------------------------------------------------------------------
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use work.Pkg_Util.all;
--================================== entity ==================================--
entity debounce is
   port(
      clk                  : in  std_logic;
      rst                  : in  std_logic;
      i_trig               : in  std_logic;
      o_stale              : out std_logic
	);
end entity debounce;

--=============================== architecture ===============================--
architecture behavioral of debounce is
   -----------------------------------------------------------------------------
   -- definicion de tipos y señales
   -----------------------------------------------------------------------------
	type t_deb_st is (E_STBY_RIN, E_DELAY, E_STBY_FIN, E_OUT);
	signal s_tick				: std_logic;
	signal i_trig_current	: std_logic;
	signal i_trig_previous	: std_logic;
	signal shot 				: std_logic;
	signal shot_latch 		: std_logic;
begin
   -----------------------------------------------------------------------------
   -- definicion de componentes
   ----------------------------------------------------------------------------
	contador_debounce:
		entity work.contadordes(behavioral)
		generic map(
			G_CNT_MAX            => 50_000_000 / 20)
		port map(
			clk                  => clk,
			rst                  => rst,
			i_en                 => '1',
			i_clr                => '0',
			o_tc                 => s_tick
		);
   -----------------------------------------------------------------------------
   -- Codigo del Modulo
   -----------------------------------------------------------------------------
   process(clk)		
   begin
      if(rising_edge(clk)) then
         if (rst = '1') then
				o_stale <= '0';
         else
				if(s_tick = '1') then
					i_trig_previous <= i_trig_current;
					i_trig_current <= i_trig;					
				end if;
				if(i_trig_previous = '1' and i_trig_current = '0') then
					shot <= '1';
				else
					shot <= '0';
				end if;
				shot_latch <= shot;
				if(shot_latch = '1' and shot = '0') then
					o_stale <= '1';
				else
					o_stale <= '0';
				end if;
--				case debounce_state is
--					when E_STBY_RIN =>
--						o_stale <= '0';
--						s_deb_delay <= G_DEB_DELAY-1;
--						if(i_trig = '1') then
--							debounce_state <= E_DELAY;
--						end if;
--					when E_DELAY =>
--						o_stale <= '0';
--						if(s_deb_delay = 0) then
--							debounce_state <= E_STBY_FIN;
--						end if;
--						if(i_trig = '1') then
--							s_deb_delay <= s_deb_delay - 1;
--						else
--							debounce_state <= E_STBY_RIN;
--						end if;
--					when E_STBY_FIN =>
--						if(i_trig = '0') then
--							o_stale <= '1';
--							debounce_state <= E_STBY_RIN;
--						end if;
--					when others => null;
--				end case;
         end if;
      end if;
   end process;

end architecture behavioral;