#include <stdio.h>

int main(void){
	int c;

	while((c = getchar()) != EOF){
		if (c == 0x09) {
		 	putchar('\\');
			putchar('t');
			putchar('\n');
		}

		else if (c == 0x08){
			putchar('\\');
			putchar('b');
			putchar('\n');
		}

		else if (c == 0x5c){
			putchar('\\');
			putchar('\\');
			putchar('\n');
		}
	}
	return 0;
}
