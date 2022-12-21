#include <stdio.h>

//  Revise the main routine of the longest-line program so it will correctly print
// the length of arbitrary long input lines, and as much as possible of the text.

#define MAXLENGTH 1000

int getLine(char[], int);
void copy(char[], char[]);

int main(void){
	int len, max = 0;
	char line[MAXLENGTH], longest[MAXLENGTH];

	while ((len = getLine(line,MAXLENGTH)) > 0){
		if(len > max) max = len;
		copy(longest,line);
	}

	if(max > 0) printf("lenght: %d, message: %s\n",max, longest);

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

void copy(char to[], char from[]){
	int i = 0;

	while(from[i] != '\0'){
		to[i] = from[i];
		i++;
	}
}
