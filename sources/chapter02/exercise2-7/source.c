#include <stdio.h>

/*
 Write a function invert(x,p,n) that returns x with the n bits that begin at
position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged.

*/
unsigned int invert(unsigned int , int, int);

int main(void){
	printf("%u\n", invert(88,4,3));
}

unsigned int invert(unsigned int x, int p, int n){
	return (x ^ (~(~0U << n)) << p+1 - n);
}
