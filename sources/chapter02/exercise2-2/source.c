#include <stdio.h>

// Write a loop equivalent to the for loop above without using && or ||.
// for (i=0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
// s[i] = c;

int main(void){
	size_t i;
	int c,lim = 100;
	char s[lim];
	for(i=0; i < lim - 1; i++){
		c = getchar();
		if (c == '\n') break;
		if (c == EOF) break;
		s[i] = c;
	}
	return 0;
}
