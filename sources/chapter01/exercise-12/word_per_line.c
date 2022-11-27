#include <stdio.h>

// Write a program that prints its input one word per line

#define IN  1
#define OUT  0

int main(void){
	int c, state, nw;

	state = nw = OUT;
	while((c = getchar()) != EOF){
		if(c == 0x0a || c == 0x20 || c == 0x09) putchar('\n');
		else if (c == 0x0a && nw > 0){ 
			putchar('\n');
			nw ^= nw;
		}
		else {
			putchar(c);
		 	++nw;
		}
	}
	return 0;
}
