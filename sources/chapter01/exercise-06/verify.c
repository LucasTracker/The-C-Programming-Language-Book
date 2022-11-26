#include <stdio.h>

// Verify that the expression getchar() != EOF is 0 or 1.

int main(void){
	int c;
	while((c = getchar()) != EOF){
		if(c != 0x0a)	// 0x0a -> '\n'
			puts("The expression is 1");
	}

	puts("The expression is 0");
}
