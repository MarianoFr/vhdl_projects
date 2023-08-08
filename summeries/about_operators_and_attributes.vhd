---------- About Operators and Attributes ----------
-- Assignment operators
-- <= used to assign a value to a signal
-- := used to assign a value to a variable, constant, or generic. Used also to establish
--    initial values.
-- => used to assign values to individual vector elements or with others.

SIGNAL x : STD_LOGIC;
VARIABLE y : STD_LOGIC_VECTOR(3 DOWNTO 0);   -- Leftmost bit is MSB
SIGNAL w: STD_LOGIC_VECTOR(0 TO 7); -- Rightmost bit is MSB

-- The following assignments are legal
x <= '1'; -- '1' is assigned to SIGNAL x using "<="
y := "0000"; -- "0000" is assigned to VARIABLE y using ":="
w <= "10000000"; -- LSB is '1', the others are '0'
w <= (0 =>'1', OTHERS =>'0'); -- LSB is '1', the others are '0'

--------- Logical Operators
-- Used to perform logical operations with data types BIT, STD_LOGIC or STD_ULOGIC, with 
-- their respective vector extensions. 
-- � NOT has precedence over the others.
--       y <= NOT a AND b; -- (a'.b)
--       y <= NOT (a AND b); -- (a.b)'
--       y <= (a AND b); -- (a.b)' 
-- � AND
-- � OR
-- � NAND
-- � NOR
-- � XOR
-- � XNOR

--------- Arithmetic Operators
-- The data can be of type INTEGER,
-- SIGNED, UNSIGNED, or REAL (recall that the last cannot be synthesized di-
-- rectly). Also, if the std_logic_signed or the std_logic_unsigned package of the ieee
-- library is used, then STD_LOGIC_VECTOR can also be employed directly in addi-
-- tion and subtraction operations
-- + Addition
-- - Subtraction
-- * Multiplication
-- / Division. Only power of 2 dividers are allowed (2, 4, 8, 16, etc)
-- ** Exponentiation. Allowed with static values of base and exponent
-- MOD Modulus  there generally is little or no synthesis support
-- REM Remainder  there generally is little or no synthesis support
-- ABS Absolute value  there generally is little or no synthesis support

--------- Comparison Operators
-- = Equal to
-- /= Not equal to
-- < Less than
-- > Greater than
-- <= Less than or equal to
-- >= Greater than or equal to

--------- Shift Operators
-- <left operand> <shift operation> <right operand>. The left operand must be
-- of type BIT_VECTOR, while the right operand must be an INTEGER (+ or - in
-- front of it is accepted)
-- � sll Shift left logic – positions on the right are filled with ‘0’s
-- � srl Shift right logic – positions on the left are filled with ‘0’s

--------- Data Attributes
-- Info we can get from data
-- The pre-defined, synthesizable data attributes are the following:
-- � d’LOW: Returns lower array index
-- � d’HIGH: Returns upper array index
-- � d’LEFT: Returns leftmost array index
-- � d’RIGHT: Returns rightmost array index
-- � d’LENGTH: Returns vector size
-- � d’RANGE: Returns vector range
-- � d’REVERSE_RANGE: Returns vector range in reverse order
-- If the signal is of enumerated type, then:
-- � d’VAL(pos): Returns value in the position specified
-- � d’POS(value): Returns position of the value specified
-- � d’LEFTOF(value): Returns value in the position to the left of the value specified
-- � d’VAL(row, column): Returns value in the position specified; etc.
-- There is little or no synthesis support for enumerated data type attributes.

--------- Signal Attributes
-- Let us consider a signal s. Then:
-- � s’EVENT: Returns true when an event occurs on s
-- � s’STABLE: Returns true if no event has occurred on s
-- � s’ACTIVE: Returns true if s = ‘1’
-- � s’QUIET <time>: Returns true if no event has occurred during the time specified
-- � s’LAST_EVENT: Returns the time elapsed since last event
-- � s’LAST_ACTIVE: Returns the time elapsed since last s = ‘1’
-- � s’LAST_VALUE: Returns the value of s before the last event; etc.
-- Only the 2 first signal attributes are synthesizable, the other ones are mainly for simulation.
-- clk'EVENT AND clk='1' is equivalent to RISING_EDGE(clk), the later being the most used.

--------- User-Defined Attributes
-- VHDL allows for user defined attributes, it must be declared and specified.
-- The syntax is conformed by a declaration and a specification.
-- Declaration: ATTRIBUTE attribute_name: attribute_type;
-- Specification: ATTRIBUTE attribute_name OF target_name: class IS value;
-- where:
-- attribute_type: any data type (BIT, INTEGER, STD_LOGIC_VECTOR, etc.)
-- class: TYPE, SIGNAL, FUNCTION, etc.
-- value: ‘0’, 27, ‘‘00 11 10 01’’, etc. Could be used to give a marking? ID to functions?
-- Example:
-- ATTRIBUTE number_of_inputs: INTEGER;
-- -- declaration
-- ATTRIBUTE number_of_inputs OF nand3: SIGNAL IS 3; -- specification
-- ...
-- inputs <= nand3'number_of_pins;
-- -- attribute call, returns 3

--------- Operator Overloading
