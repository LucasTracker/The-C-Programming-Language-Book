#include <stdio.h>

//Write a program to print a histogram of the lengths of words in its input. It is
//easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.

int main(void){
	int c, countCharacters,i;
	unsigned int words5, words10, wordsgreaterthan10;

	words5 = words10 = wordsgreaterthan10 = 0;
	
	while((c = getchar()) != EOF){
		if(c >= 0x41 && c <= 0x5A || c >= 0x61 && c <= 0x7A) ++countCharacters;
		if (c == 0x0a){
			if(countCharacters > 0 && countCharacters <= 5) ++words5;
			
			if(countCharacters > 5 && countCharacters <= 10) ++words10;
			
			if(countCharacters > 10) ++wordsgreaterthan10;
			
			countCharacters = 0;
		}
	}

	
	// Words with up 5 characters
	printf("Length 5   -> ");

	for(i=0; i < words5; i++) putchar('*');
	putchar(0x0a);

	// Words with up 10 characters
	printf("Length 10  -> ");

	for(i=0; i < words10; i++) putchar('*');
	putchar(0x0a);

	// Words greater than 10 characters

	printf("Lenght 10+ -> ");

	for(i=0; i < wordsgreaterthan10; i++) putchar('*');
	putchar(0x0a);

	
	return 0;
}
