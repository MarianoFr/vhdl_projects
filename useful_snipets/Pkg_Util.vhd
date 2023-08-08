--------------------------------------------------------------------------------
--                          CNEA - CAE - IYC                                  --
--------------------------------------------------------------------------------
-- Diseño         : pkg_util(RTL)
-- Nombre Archivo : Pkg_Util.vhd
-- Descripción    : Tipos y funciones que me ayudan en el mundo del VHDL
-- Nota           :
-- Limitaciones   :
-- Errores        : Ninguno
-- Dependencias   : ieee.std_logic_1164
-- Autor          : Andrés Cervantes (acervantes@cae.cnea.gov.ar).
--------------------------------------------------------------------------------
-- Revisión Fecha       Revisor Comentarios
-- 0        13/09/2017  AC      Original
-- 1        01/01/2022  AC      Cambios y actualizacion
--------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.all;

package pkg_util is
   -- Tipos
   subtype  t_slv_2     is std_logic_vector( 1 downto 0);
   subtype  t_slv_3     is std_logic_vector( 2 downto 0);
   subtype  t_slv_4     is std_logic_vector( 3 downto 0);
   subtype  t_slv_5     is std_logic_vector( 4 downto 0);
   subtype  t_slv_6     is std_logic_vector( 5 downto 0);
   subtype  t_slv_7     is std_logic_vector( 6 downto 0);
   subtype  t_slv_8     is std_logic_vector( 7 downto 0);         -- Defino un byte
   subtype  t_slv_9     is std_logic_vector( 8 downto 0);
   subtype  t_slv_10    is std_logic_vector( 9 downto 0);
   subtype  t_slv_11    is std_logic_vector(10 downto 0);
   subtype  t_slv_12    is std_logic_vector(11 downto 0);
   subtype  t_slv_13    is std_logic_vector(12 downto 0);
   subtype  t_slv_14    is std_logic_vector(13 downto 0);
   subtype  t_slv_15    is std_logic_vector(14 downto 0);
   subtype  t_slv_16    is std_logic_vector(15 downto 0);
   subtype  t_slv_27    is std_logic_vector(26 downto 0);
   subtype  t_slv_32    is std_logic_vector(31 downto 0);
   subtype  t_slv_62    is std_logic_vector(61 downto 0);
   subtype  t_slv_64    is std_logic_vector(63 downto 0);
   subtype  t_slv_65    is std_logic_vector(64 downto 0);
   subtype  t_slv_66    is std_logic_vector(65 downto 0);
   type     t_slvv_4    is array(natural range <>) of t_slv_4;    -- Defino un vector x4
   type     t_slvv_5    is array(natural range <>) of t_slv_5;    -- Defino un vector x4
   type     t_slvv_8    is array(natural range <>) of t_slv_8;    -- Defino un vector x8
   type     t_slvv_10   is array(natural range <>) of t_slv_10;   -- Defino un vector x10
   type     t_slvv_11   is array(natural range <>) of t_slv_11;   -- Defino un vector x11
   type     t_slvv_12   is array(natural range <>) of t_slv_12;   -- Defino un vector x12
   type     t_slvv_13   is array(natural range <>) of t_slv_13;   -- Defino un vector x13
   type     t_slvv_16   is array(natural range <>) of t_slv_16;   -- Defino un vector x16
   type     t_slvv_27   is array(natural range <>) of t_slv_27;   -- Defino un vector x16
   type     t_slvv_62   is array(natural range <>) of t_slv_62;   -- Defino un vector x62
   type     t_slvv_64   is array(natural range <>) of t_slv_64;   -- Defino un vector x64
   type     t_slvv_65   is array(natural range <>) of t_slv_65;   -- Defino un vector x65
   type     t_slvv_66   is array(natural range <>) of t_slv_66;   -- Defino un vector x66

   type     t_slm       is array(natural range <>, natural range <>) of std_logic;
   type     t_slm_10    is array(natural range <>, natural range <>) of t_slv_10;
   type     t_cm        is array(natural range <>, natural range <>) of natural;

   --type     dato_xx is array (natural range <>) of std_logic_vector;        --No me funcionó, parece que anda en VHDL-2008 LPM
   -- Funciones
   function    log2c (n: natural) return natural;

   function    ormultiple (signal i_din: in std_logic_vector) return std_logic;

   function    dame_fila (slm: t_slm; filaindice: natural) return std_logic_vector;
   procedure   asig_fila (signal slm: out t_slm; slv: std_logic_vector; constant filaindice: natural);														
   function    dame_columna (slm: t_slm; columnaindice: natural) return std_logic_vector;
   procedure   asig_columna (signal slm: out t_slm; slv: std_logic_vector; constant columnaindice: natural);

--   function    dame_fil_10 (slm: t_slm_10; filaindice: natural) return std_logic_vector;
--   procedure   asig_fil_10 (signal slm_10: out t_slm; slv: std_logic_vector; constant filaindice: natural);														
--   function    dame_col_10 (slm: t_slm_10; coluindice: natural) return std_logic_vector;
--   procedure   asig_col_10 (signal slm_10: out t_slm; slv: std_logic_vector; constant coluindice: natural);

   function    to_slvv_62(slm : t_slm) return t_slvv_62;
   function    to_slvv_64(slm : t_slm) return t_slvv_64;
   function    to_slvv_65(slm : t_slm) return t_slvv_65;
   function    to_slvv_66(slm : t_slm) return t_slvv_66;
end pkg_util;

package body pkg_util is
   function log2c (n: natural) return natural is
      variable m              : natural;
      variable p              : natural;
   begin
      m := 0;
      p := 1;
      while p < n loop
         m := m + 1;
         p := p * 2;
      end loop;
      return m;
   end log2c;

   function ormultiple (signal i_din: in std_logic_vector) return std_logic is
      variable o_dout   : std_logic;
   begin
      o_dout := '0';
      for i in i_din'range loop
         o_dout :=o_dout or i_din(i);
      end loop;
      return o_dout;
   end function;


   function dame_fila (slm: t_slm; filaindice: natural) return std_logic_vector is
      variable slv      : std_logic_vector(slm'high(2) downto slm'low(2));
   begin
      for i in slv'range loop
         slv(i) := slm(filaindice, i);
      end loop;
      return slv;
   end function;

   -- Asigna una fila a una matriz
	procedure asig_fila (signal slm: out t_slm; slv: std_logic_vector; constant filaindice: natural) is
		--variable temp     : std_logic_vector(slm'high(2) downto slm'low(2));
		variable temp     : std_logic_vector(61 downto 0);
	begin
		temp := slv;
--		for i in temp'range loop
		for i in 0 to 61 loop
			slm(filaindice, i)  <= temp(i);
		end loop;
	end procedure;

   function dame_columna (slm: t_slm; columnaindice: natural) return std_logic_vector is
      variable slv      : std_logic_vector(slm'range(1));
   begin
      for i in slm'range(1) loop
         slv(i)  := slm(i, columnaindice);
      end loop;
      return slv;
   end function;

	procedure asig_columna (signal slm: out t_slm; slv: std_logic_vector; constant columnaindice: natural) is
		variable temp     : std_logic_vector(slm'range(1));
	begin
		temp := slv;
		for i in temp'range loop
			slm(i, columnaindice)  <= temp(i);
		end loop;
	end procedure;

	-- create vector-vector from matrix (62 bit)
	function to_slvv_62(slm : t_slm) return t_slvv_62 is
		variable result		: t_slvv_62(slm'range(1));
	begin
		if (slm'length(2) /= 62) then	report "to_slvv_62: type mismatch - slm'length(2)=" & integer'image(slm'length(2)) severity failure;	end if;
		for i in slm'range(1) loop
			result(i)	:= dame_fila(slm, i);
		end loop;
		return result;
	end function;

	-- create vector-vector from matrix (64 bit)
	function to_slvv_64(slm : t_slm) return t_slvv_64 is
		variable result		: t_slvv_64(slm'range(1));
	begin
		if (slm'length(2) /= 64) then	report "to_slvv_64: type mismatch - slm'length(2)=" & integer'image(slm'length(2)) severity failure;	end if;
		for i in slm'range(1) loop
			result(i)	:= dame_fila(slm, i);
		end loop;
		return result;
	end function;

	-- create vector-vector from matrix (65 bit)
	function to_slvv_65(slm : t_slm) return t_slvv_65 is
		variable result		: t_slvv_65(slm'range(1));
	begin
		if (slm'length(2) /= 65) then	report "to_slvv_65: type mismatch - slm'length(2)=" & integer'image(slm'length(2)) severity failure;	end if;
		for i in slm'range(1) loop
			result(i)	:= dame_fila(slm, i);
		end loop;
		return result;
	end function;

	-- create vector-vector from matrix (66 bit)
	function to_slvv_66(slm : t_slm) return t_slvv_66 is
		variable result		: t_slvv_66(slm'range(1));
	begin
		if (slm'length(2) /= 66) then	report "to_slvv_66: type mismatch - slm'length(2)=" & integer'image(slm'length(2)) severity failure;	end if;
		for i in slm'range(1) loop
			result(i)	:= dame_fila(slm, i);
		end loop;
		return result;
	end function;

end pkg_util;