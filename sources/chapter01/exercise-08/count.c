#include <stdio.h>

//  Write a program to count blanks, tabs, and newline

int main(void){
	int c;
	unsigned long num_blanks, num_tabs, new_lines;

	num_blanks = 0;
	num_tabs = 0;
	new_lines = 0;
	
	while((c = getchar()) != EOF){
		if(c == 0x0a) ++new_lines;
		else if(c == 0x09) ++num_tabs;
		else if(c == 0x20) ++num_blanks; 
	}
	putchar(0x0a);
	printf("new_lines : 	%ld\n", new_lines);
	printf("num_tabs : 	%ld\n", num_tabs);
	printf("num_blanks : 	%ld\n", num_blanks);
}
