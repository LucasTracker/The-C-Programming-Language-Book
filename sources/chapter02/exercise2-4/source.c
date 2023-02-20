#include <stdio.h>

/*
Write an alternative version of squeeze(s1,s2) that deletes each character in
s1 that matches any character in the string s2
*/
void squeeze(char[], int);

int main(void){
	char name[] = "lucas\0";

	squeeze(name,'c');
	printf("%s\n",name); 
	return 0;
}

void squeeze(char s[], int c){
	int i, j;
	for (i = j = 0; s[i] != '\0'; i++){
		if(s[i] != c){
			s[j] = s[i];
			j++;
		}
	}
	s[j] = '\0';
}
