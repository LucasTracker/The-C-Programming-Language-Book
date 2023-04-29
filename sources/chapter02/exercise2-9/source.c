#include <stdio.h>

/*In a two's complement number system, x &= (x-1) deletes the rightmost 1-bit
in x. Explain why. Use this observation to write a faster version of bitcount.*/

int bitcount(unsigned int);

int main(void){
	printf("%d\n", bitcount(5));
	return 0;
}

int bitcount(unsigned int x){
	/* The method x &= (x-1) deletes the rightmost 1-bit in x . because all x-1 has the rightmost set 0.
	when doing the bitwise operator AND. the rightmost 1-bit in X is cleared. */
	int b;
	for(b = 0; x != 0; x &= (x-1)){
		if(x) b++;
	}
	return b;
}
