#include <stdio.h>
#include <stdlib.h>
/*
Write a function escape(s,t) that converts characters like newline and tab
into visible escape sequences like \n and \t as it copies the string t to s. Use a switch. Write
a function for the other direction as well, converting escape sequences into the real characters.
*/

void escape(char *, char *);

int main(void){
	char *s = "Eu sou\n\n\t\n\t\t\t\n";
	char *t = (char *) malloc(80 * sizeof(char));
	escape(s,t);
	puts(t);
	return 0;
}

void escape(char* s, char* t){
	int c;
	int i,j;
	i = j = 0;
	for(i; s[i] != '\0'; i++){
		switch(s[i]){
			case '\n':
				t[j++] = '\\';
				t[j++] = 'n';
				break;
			case '\t':
				t[j++] = '\\';
				t[j++] = 't';
				break;
			default:
				t[j++] = s[i];
				break;
		}
	}

	return;
}
