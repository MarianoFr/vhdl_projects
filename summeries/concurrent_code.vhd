----------------------------------- Concurrent Code -----------------------------------

-- VHDL can be concurrent (parallel) or sequential. Different statements are intended for 
-- both programming paradigms, so knowing the difference is very importan.
-- Strictly concurrent statements are WHEN and GENERATE, plus a special assignment called
-- BLOCK.

-- Combinational vs. Sequential logic

--   Combinational Logic is that in which the outputs depend solely on the current inputs, and
-- in principle the system requires no memory.
--   Sequential Logic is that in which the outputs depend on the history of the inputs and
-- requires storage elements, connected to the logic via feedback loops. But not every logic
-- containing storage elements is sequential.

-- Concurrent vs. Sequential code
--   VHDL code is inherently concurrent (parallel). Only statement placed inside PROCESSes,
-- FUNCTIONs or PROCEDUREs are sequential, not making the hole code sequential which remains
-- concurrent. Concurrent code is also called DATAFLOW code.
-- In summary, in concurrent code the following can be used, including the basic operators
-- (AND, OR, +, -, *, sll, sra, etc.):
-- � The WHEN statement (WHEN/ELSE or WITH/SELECT/WHEN);
-- � The GENERATE statement;
-- � The BLOCK statement.
-- When statement
--   It appears in two forms: WHEN / ELSE (simple
-- WHEN) and WITH / SELECT / WHEN (selected WHEN). Its syntax is shown
--    below.
--    WHEN / ELSE:
-- assignment WHEN condition ELSE
-- assignment WHEN condition ELSE
-- ...;
-- WITH / SELECT / WHEN:
-- WITH identifier SELECT
-- assignment WHEN value,
-- assignment WHEN value,
-- ...;
-- Example:
-- ------ With WHEN/ELSE -------------------------
-- outp <= "000" WHEN (inp='0' OR reset='1') ELSE
-- "001" WHEN ctl='1' ELSE
-- "010";
-- ---- With WITH/SELECT/WHEN --------------------
-- WITH control SELECT
-- output <= "000" WHEN reset, -- All permutations must be tested, so the keyword OTHERS is
-- "111" WHEN set,             -- very useful, pretty similar to default in switch case 
-- UNAFFECTED WHEN OTHERS;     -- from c language. Also UNNAFECTED makes no changes to the output
-- -----------------------------------------------
--
-- Generate Statement
-- It's the equivalent to loop in sequential code, it allows to repeat a piece of code a number
-- of times.
-- label: FOR identifier IN range GENERATE
--   (concurrent assignments)
-- END GENERATE;
-- An irregular form is also available, which uses IF/GENERATE (with an IF
-- equivalent; recall that originally IF is a sequential statement). Here ELSE is not
-- allowed. In the same way that IF/GENERATE can be nested inside FOR/
-- GENERATE (syntax below), the opposite can also be done.
-- label1: FOR identifier IN range GENERATE
-- ...
-- label2: IF condition GENERATE
-- (concurrent assignments)
-- END GENERATE;
-- ...
-- END GENERATE;
-- Example:
--    SIGNAL x: BIT_VECTOR (7 DOWNTO 0);
--    SIGNAL y: BIT_VECTOR (15 DOWNTO 0);
--    SIGNAL z: BIT_VECTOR (7 DOWNTO 0);
--    ...
--    G1: FOR i IN x'RANGE GENERATE
--    z(i) <= x(i) AND y(i+8);
--    END GENERATE;
-- ¡¡¡One important remark about GENERATE (and the same is true for LOOP,
-- which will be seen in chapter 6) is that both limits of the range must be static,
-- no dinamyc signals nor variables!!!
--
-- Block statement
-- Simple and guarded blocks exist. In its simplest form, it allows to put together pieces 
-- of code, to make the over all more readable. The syntax is:
-- label: BLOCK
--    [declarative part]
-- BEGIN
--    (concurrent statements)
-- END BLOCK label;
-- Example:
-- b1: BLOCK
--    SIGNAL a: STD_LOGIC;
-- BEGIN
--    a <= input_sig WHEN ena='1' ELSE 'Z';
-- END BLOCK b1;
-- Simple BLOCK
-- A BLOCK (simple or guarded) can be nested inside another BLOCK. The corre-
-- sponding syntax is shown below.
-- label1: BLOCK
--    [declarative part of top block]
-- BEGIN
--    [concurrent statements of top block]
--    label2: BLOCK
--       [declarative part nested block]
--    BEGIN
--       (concurrent statements of nested block)
--    END BLOCK label2;
--    [more concurrent statements of top block]
-- END BLOCK label1;
-- Guarded BLOCK
-- A guarded BLOCK includes a guard which wil executed only when this guard is asserted
-- label: BLOCK (guard expression)
--    [declarative part]
-- BEGIN
--    (concurrent guarded and unguarded statements)
-- END BLOCK label;
-- The following example represents this technique, q<=d will only occur if clk='1'
-- -------------------------------
--  LIBRARY ieee;
--  USE ieee.std_logic_1164.all;
--  -------------------------------
--  ENTITY latch IS
--    PORT (d, clk: IN STD_LOGIC;
--       q: OUT STD_LOGIC);
--  END latch;
-- -------------------------------
--  ARCHITECTURE latch OF latch IS
--  BEGIN
--     b1: BLOCK (clk='1')
--     BEGIN
--       q <= GUARDED d;
--     END BLOCK b1;
--  END latch;
-- -------------------------------
-- Another example of guarded expressions, where q<='0' will occur when 
-- the guard expression is true and rst is ‘1’
-- -------------------------------
-- LIBRARY ieee;
-- USE ieee.std_logic_1164.all;
-- -------------------------------
-- ENTITY dff IS
--    PORT ( d, clk, rst: IN STD_LOGIC;
--       q: OUT STD_LOGIC);
-- END dff;
-- -------------------------------
-- ARCHITECTURE dff OF dff IS
-- BEGIN
--    b1: BLOCK (clk'EVENT AND clk='1')
--    BEGIN
--       q <= GUARDED '0' WHEN rst='1' ELSE d;
--    END BLOCK b1;
-- END dff;
-- ------------------------------
