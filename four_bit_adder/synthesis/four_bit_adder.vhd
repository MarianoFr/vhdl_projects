-- Version: v11.9 SP6 11.9.6.7

library ieee;
use ieee.std_logic_1164.all;
library proasic3;
use proasic3.all;

entity four_bit_adder is

    port( pi_a   : in    std_logic_vector(3 downto 0);
          pi_b   : in    std_logic_vector(3 downto 0);
          po_sum : out   std_logic_vector(3 downto 0)
        );

end four_bit_adder;

architecture DEF_ARCH of four_bit_adder is 

  component INBUF
    port( PAD : in    std_logic := 'U';
          Y   : out   std_logic
        );
  end component;

  component XOR3
    port( A : in    std_logic := 'U';
          B : in    std_logic := 'U';
          C : in    std_logic := 'U';
          Y : out   std_logic
        );
  end component;

  component MAJ3
    port( A : in    std_logic := 'U';
          B : in    std_logic := 'U';
          C : in    std_logic := 'U';
          Y : out   std_logic
        );
  end component;

  component OUTBUF
    port( D   : in    std_logic := 'U';
          PAD : out   std_logic
        );
  end component;

  component VCC
    port( Y : out   std_logic
        );
  end component;

  component NOR2B
    port( A : in    std_logic := 'U';
          B : in    std_logic := 'U';
          Y : out   std_logic
        );
  end component;

  component GND
    port( Y : out   std_logic
        );
  end component;

  component XOR2
    port( A : in    std_logic := 'U';
          B : in    std_logic := 'U';
          Y : out   std_logic
        );
  end component;

    signal \GND\, \VCC\, ADD_4x4_slow_I2_un1_CO1, 
        \po_sum.I0_un1_CO1\, \po_sum.N76\, \pi_a_c[0]\, 
        \pi_a_c[1]\, \pi_a_c[2]\, \pi_a_c[3]\, \pi_b_c[0]\, 
        \pi_b_c[1]\, \pi_b_c[2]\, \pi_b_c[3]\, \po_sum_c[0]\, 
        \po_sum_c[1]\, \po_sum_c[2]\, \po_sum_c[3]\ : std_logic;

begin 


    \pi_a_pad[3]\ : INBUF
      port map(PAD => pi_a(3), Y => \pi_a_c[3]\);
    
    po_sum_ADD_4x4_slow_I2_S : XOR3
      port map(A => \pi_a_c[2]\, B => \po_sum.N76\, C => 
        \pi_b_c[2]\, Y => \po_sum_c[2]\);
    
    po_sum_ADD_4x4_slow_I2_un1_CO1 : MAJ3
      port map(A => \pi_a_c[2]\, B => \pi_b_c[2]\, C => 
        \po_sum.N76\, Y => ADD_4x4_slow_I2_un1_CO1);
    
    \po_sum_pad[3]\ : OUTBUF
      port map(D => \po_sum_c[3]\, PAD => po_sum(3));
    
    \pi_b_pad[0]\ : INBUF
      port map(PAD => pi_b(0), Y => \pi_b_c[0]\);
    
    \pi_b_pad[2]\ : INBUF
      port map(PAD => pi_b(2), Y => \pi_b_c[2]\);
    
    \pi_a_pad[0]\ : INBUF
      port map(PAD => pi_a(0), Y => \pi_a_c[0]\);
    
    po_sum_ADD_4x4_slow_I1_CO1 : MAJ3
      port map(A => \pi_a_c[1]\, B => \pi_b_c[1]\, C => 
        \po_sum.I0_un1_CO1\, Y => \po_sum.N76\);
    
    \pi_b_pad[1]\ : INBUF
      port map(PAD => pi_b(1), Y => \pi_b_c[1]\);
    
    VCC_i : VCC
      port map(Y => \VCC\);
    
    po_sum_ADD_4x4_slow_I0_un1_CO1 : NOR2B
      port map(A => \pi_b_c[0]\, B => \pi_a_c[0]\, Y => 
        \po_sum.I0_un1_CO1\);
    
    \pi_b_pad[3]\ : INBUF
      port map(PAD => pi_b(3), Y => \pi_b_c[3]\);
    
    \pi_a_pad[2]\ : INBUF
      port map(PAD => pi_a(2), Y => \pi_a_c[2]\);
    
    GND_i : GND
      port map(Y => \GND\);
    
    \po_sum_pad[0]\ : OUTBUF
      port map(D => \po_sum_c[0]\, PAD => po_sum(0));
    
    po_sum_ADD_4x4_slow_I3_Y : XOR3
      port map(A => \pi_b_c[3]\, B => ADD_4x4_slow_I2_un1_CO1, C
         => \pi_a_c[3]\, Y => \po_sum_c[3]\);
    
    po_sum_ADD_4x4_slow_I1_S : XOR3
      port map(A => \pi_b_c[1]\, B => \pi_a_c[1]\, C => 
        \po_sum.I0_un1_CO1\, Y => \po_sum_c[1]\);
    
    \po_sum_pad[1]\ : OUTBUF
      port map(D => \po_sum_c[1]\, PAD => po_sum(1));
    
    \pi_a_pad[1]\ : INBUF
      port map(PAD => pi_a(1), Y => \pi_a_c[1]\);
    
    \po_sum_pad[2]\ : OUTBUF
      port map(D => \po_sum_c[2]\, PAD => po_sum(2));
    
    po_sum_ADD_4x4_slow_I0_S : XOR2
      port map(A => \pi_a_c[0]\, B => \pi_b_c[0]\, Y => 
        \po_sum_c[0]\);
    

end DEF_ARCH; 
