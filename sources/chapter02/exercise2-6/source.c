#include <stdio.h>

/*
Write a function setbits(x,p,n,y) that returns x with the n bits that begin at
position p set to the rightmost n bits of y, leaving the other bits unchanged.
*/


unsigned int setbits(unsigned int, int, int,int);

int main(void){
	printf("%u\n", setbits(4,6,2,2));
	return 0;
}

unsigned int setbits(unsigned int x, int p, int n, int y) {
	return x & ((~0U << n) | (~(~0U << (p + 1 - n)))) | (y & (~(~0U << n))) << (p+1-n);
}
