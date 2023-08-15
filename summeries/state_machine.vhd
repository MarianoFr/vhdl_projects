------------------- Finit State Machines (FSM) -------------------
-- FSMs are a tool for sequential logic.
-- Mealy and Moore state machine. In Moore machines, the output depends only on the present state
--               ---------------------
-- input ======►|    Combinational    |====► output
--         *===►|       Logic         |===*
--        ||     ---------------------    ||
--pr_state||                              ||nx_state
--        ||     ---------------------    ||
--         *====|     Sequential      |◄==*
--              |       Logic         |<--clk
--               --------------------- <--rst
--
-- All sequential circuits can be modeled as a FSM, but this aproach could lead to
-- complex and error prone codes. As a rule of thumb, a FSM design should only be
-- used when the system has a precise set of tasks that can be correctly distinguished.
-- A typical state machine implementation starts with a user defined enumerated data type,
-- containing a list of all possible system states.
-- As a typical aproach, both blocks are well separated.
--      Lower block (Sequential) Section
-- The sequential block contains the flip-flops and is composed of sequential code,
-- thus it must be composed with a PROCESS (IF, WAIT, CASE, LOOP).
-- The following is a typical design template:
-- -----------------------------------------
-- PROCESS (reset, clock)
-- BEGIN
--    IF (reset='1') THEN
--       pr_state <= state0;
--    ELSIF (clock'EVENT AND clock='1') THEN
--       pr_state <= nx_state;
--    END IF;
-- END PROCESS;
-- -----------------------------------------
-- This scheme is advantegous because it minimizes the number of flip-flops.
-- If the default binary encoding style is used, log2(n) flip-flops wil be used,
-- where n is the number of states.
--      Upper Block (Combinational) Section
-- Being a combinational logic, we can choose to use sequential or concurrent code.
-- The CASE statement is pretty useful, giving us a sequential design for this block.
-- -----------------------------------------
-- PROCESS (input, pr_state)
-- BEGIN
--    CASE pr_state IS
--       WHEN state0 =>
--          IF (input = ...) THEN
--             output <= <value>;
--             nx_state <= state1;
--          ELSE ...
--          END IF;
--       WHEN state1 =>
--          IF (input = ...) THEN
--             output <= <value>;
--             nx_state <= state2;
--          ELSE ...
--          END IF;
--       WHEN state2 =>
--          IF (input = ...) THEN
--             output <= <value>;
--             nx_state <= state2;
--          ELSE ...
--          END IF;
--       ...
--    END CASE;
-- END PROCESS;
-- -----------------------------------------
-- This design being very simple, stablishes two things, the output value and the next state.
-- It also copmplies with the sequential code design rule where all signals must be included
-- in the sensitivity list and all input/output combinations must be specified.
--      Complete FSM design
-- -----------------------------------------
   LIBRARY ieee;
   USE ieee.std_logic_1164.all;
-- -----------------------------------------------------
   ENTITY <entity_name> IS
      PORT ( input: IN <data_type>;
         reset, clock: IN STD_LOGIC;
         output: OUT <data_type>);
   END <entity_name>;
   -----------------------------------------------------
   ARCHITECTURE <arch_name> OF <entity_name> IS
      TYPE state IS (state0, state1, state2, state3, ...);
      SIGNAL pr_state, nx_state: state;
   BEGIN
      ---------- Lower section: ------------------------
      PROCESS (reset, clock)
      BEGIN
         IF (reset='1') THEN
            pr_state <= state0;
         ELSIF (clock'EVENT AND clock='1') THEN
            pr_state <= nx_state;
         END IF;
      END PROCESS;
      ---------- Upper section: ------------------------
      PROCESS (input, pr_state)
      BEGIN
         CASE pr_state IS
            WHEN state0 =>
               IF (input = ...) THEN
                  output <= <value>;
                  nx_state <= state1;
               ELSE ...
               END IF;
            WHEN state1 =>
               IF (input = ...) THEN
                  output <= <value>;
                  nx_state <= state2;
               ELSE ...
               END IF;
            WHEN state2 =>
               IF (input = ...) THEN
                  output <= <value>;
                  nx_state <= state3;
               ELSE ...
               END IF;
            ...
         END CASE;
      END PROCESS;
   END <arch_name>;

-- -----------------------
-- We have asynchronous and synchronous Mealy machines. Mealy is a machine
-- where the output depends on the present state and the inputs, but this in escence is synchrounous
-- to the input's changes and not to any clock. Because of this, flip flops are only present in the lower part,
-- sequential logic, if whe want the hole system to be synchronous to some global clock, the outputs
-- must be stored in flip flops.
--               Asynch Mealy                             Synch Mealy
--              -------------                            -------------      -----------
--   input ===►| Logic gates |===► output     input ===►| Logic gates |===►| FlipFlops |===►output
--              -------------                            -------------      -----------
--                ↑       ↑                                ↑       ↑
--               -----------                              -----------
--              | FlipFlops |                            | FlipFlops |
--               -----------                              -----------
--