LIBRARY ieee;
use IEEE.STD_LOGIC_1164.all;

ENTITY compara2 IS
	port(
		a0,a1,a2,a3,b0,b1,b2,b3,cin : IN std_logic;
		x1,x2,x3,x4,carry: INOUT std_logic
	);
END compara2;

ARCHITECTURE Practica7_Parte2 OF compara2 IS
      signal C: std_logic_vector(3 downto 0);
	  ATTRIBUTE SYNTHESIS_OFF OF C: SIGNAL IS TRUE;
	begin
            C(0) <= cin;
            x1 <= a0 xor b0 xor C(0);
            C(1) <= (a0 and b0) or ( C(0) and (a0 xor b0) );
            x2 <= a1 xor b1 xor C(1);
            C(2) <= (a1 and b1) or ( C(1) and (a1 xor b1) );
            x3 <= a2 xor b2 xor C(2);
            C(3) <= (a2 and b2) or ( C(2) and (a2 xor b2) );
            x4 <= a3 xor b3 xor C(3);
            carry <= (a3 and b3) or (C(3) and (a3 xor b3));
end Practica7_Parte2;