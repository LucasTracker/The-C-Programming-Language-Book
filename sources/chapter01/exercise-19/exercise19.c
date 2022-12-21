#include <stdio.h>

// Write a function reverse(s) that reverses the character string s. Use it to
// write a program that reverses its input a line at a time.

#define MAXLENGTH 1000

int getLine(char[], int);
void reverse(char[],int);

int main(void){
	int len;
	char line[MAXLENGTH];

	while ((len = getLine(line,MAXLENGTH)) > 0){
		reverse(line,len);
		printf("%s\n", line);
	}

	return 0;
}

int getLine(char s[], int length){
	int c;
	size_t i;

	for(i=0; i < length - 1 && ((c = getchar()) != EOF) &&  c != 0x0a; i++) s[i] = c;
	if(c == 0x0a){
		s[i] = '\n';
		i++;
		s[i] = '\0';
	}

	return i;
}

void reverse(char s[], int len){
	int i, j = 0;
	char temp[len];
	for(i=0; s[i] != 0x0a; i++)
		;
	--i; //remove line feed

	for(; i >= 0; --i){
		temp[j] = s[i];
		j++;
	}

	for(i=0; i < len; i++) s[i] = temp[i];

	s[i] = '\n';
	i++;
	s[i] = '\0';
}
