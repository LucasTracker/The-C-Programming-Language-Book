#include <stdio.h>

// Write a program to print all input lines that are longer than 80 characters.

#define MAXLENGTH 1000

int getLine(char[], int);

int main(void){
	int len;
	char line[MAXLENGTH];

	while ((len = getLine(line,MAXLENGTH)) > 0){
		if(len > 80) printf("%s\n", line);
	}

	return 0;
}

int getLine(char s[], int length){
	int c, i;

	for(i=0; i < length - 1 && ((c = getchar()) != EOF) &&  c != 0x0a; i++) s[i] = c;
	if(c == 0x0a){
		s[i] = '\n';
		i++;
		s[i] = '\0';
	}

	return i;
}
