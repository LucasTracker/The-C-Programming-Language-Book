#include <stdio.h>

// Write a program to copy its input to its output, replacing each
// string of one or more blanks by a single blank

int main(void){
	int c;
	unsigned int count_blanks;

	while((c = getchar()) != EOF){
		if(c == 0x20){
			++count_blanks;
		}

		else if((c != 0x20) && count_blanks > 0){
			putchar(0x20);
			putchar(c);
			count_blanks ^= count_blanks;
		}
		else putchar(c);
	}
	return 0;
}

