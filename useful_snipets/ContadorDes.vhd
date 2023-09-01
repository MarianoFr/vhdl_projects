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
use work.pkg_util.all;

--=========================1======== entity ==================================--
entity contadordes is
   generic(
      G_CNT_MAX            : natural := 15);
   port(
      clk                  : in  std_logic;
      rst                  : in  std_logic;
      i_en                 : in  std_logic;
      i_clr                : in  std_logic;
      o_tc                 : out std_logic);
end entity contadordes;

--=============================== architecture ===============================--
architecture behavioral of contadordes is
   -----------------------------------------------------------------------------
   -- definicion de tipos y señales
   -----------------------------------------------------------------------------
   signal s_tc             : std_logic;
   signal s_cuenta         : unsigned(log2c(G_CNT_MAX)-1 downto 0);
   signal r_cuenta         : unsigned(log2c(G_CNT_MAX)-1 downto 0);
begin
   -----------------------------------------------------------------------------
   -- definicion de componentes
   ----------------------------------------------------------------------------
   -----------------------------------------------------------------------------
   -- Codigo del Modulo
   -----------------------------------------------------------------------------
   process(clk)
   begin
      if(rising_edge(clk)) then
         if (rst = '1') then
            r_cuenta <= to_unsigned(G_CNT_MAX-1,log2c(G_CNT_MAX));
            o_tc     <= '0';
         else
            r_cuenta <= s_cuenta;
            o_tc     <= s_tc;
         end if;
      end if;
   end process;

   s_tc <= '1'                                           when s_cuenta = 0 else '0';
   s_cuenta <= to_unsigned(G_CNT_MAX-1,log2c(G_CNT_MAX)) when i_clr = '1' else
               r_cuenta - 1                              when i_en = '1' else
               r_cuenta;

end architecture behavioral;