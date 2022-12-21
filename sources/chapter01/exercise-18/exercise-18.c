#include <stdio.h>

//  Write a program to remove trailing blanks and tabs from each line of input,
// and to delete entirely blank lines
#define MAXLENGTH 1000

int getLine(char[], int);
int removeTrail(char[], int);

int main(void){
	int len;
	char line[MAXLENGTH];

	while ((len = getLine(line,MAXLENGTH)) > 0){
		removeTrail(line,len); 
		printf("%s", line);
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

int removeTrail(char s[], int len){
	size_t i, j=0;

	for(i=0; i < len - 1 && s[i] != 0x0a; i++){
		if ((s[i] == 0x20) || (s[i] == 0x09)){
			for(j = i; j < len - 1 && s[j] != 0x0a; j++) s[j] = s[j+1];
			i = 0;
			len -= 1;
		}
	}

	s[i] = '\n';
	i++;
	s[i] = '\0';
	return i;
}
