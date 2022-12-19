#include <stdio.h>

//  Write a program to print a histogram of the frequencies of different characters
// in its input.


int main(void){
	int CharactersNumber[25], i, j, c;
	char characters[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

	for(i = 0; i < 26; i++) CharactersNumber[i] = 0;

	while((c = getchar()) != EOF){
		if(c >= 0x41 && c <= 0x5A) ++CharactersNumber[c - 0x41];
		else if (c >= 0x61 && c <= 0x7A) ++CharactersNumber[c - 0x61];
	}

	printf("Histogram of the frequencies of different characters.\n");

	for(i=0; i < 26; i++){
		printf("%c -> ", characters[i]);
		for(j=0; j < CharactersNumber[i]; j++) putchar('*');
		putchar(0x0a);
	}
	return 0;
}
