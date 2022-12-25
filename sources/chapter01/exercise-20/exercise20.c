#include <stdio.h>

#define MAXLENGTH 1000
#define TAB 8

// Write a program detab that replaces tabs in the input with the proper number
// of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n columns.
// Should n be a variable or a symbolic parameter?

int getLine(char[], int);
void detab(char[],int);

int main(void){
	int len;
	char line[MAXLENGTH];

	while ((len = getLine(line,MAXLENGTH)) > 0){
		detab(line,len);
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

void detab(char s[], int lim){
	int pos = 1, nb;
	size_t i;

	for(i = 0; i < lim - 1; i++){
		if(s[i] == '\t'){
			nb = TAB  - ((pos - 1) % TAB);
			while(nb > 0){
				putchar('#');
				--nb;
				++pos;
			}
		}
		else if(s[i] == '\n'){
			pos = 1;
			putchar('\n');
		} else {
			putchar(s[i]);
			++pos;
		}
	}
}
