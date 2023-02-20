#include <stdio.h>
#include <string.h>
#include <math.h>

int htoi(char *);

/*
Write a function htoi(s), which converts a string of hexadecimal digits
(including an optional 0x or 0X) into its equivalent integer value. The allowable digits are 0
through 9, a through f, and A through F.
*/


int main(void){
	char *s = "0x110\n"; //example
	
	printf("%d\n",htoi(s));
	return 0;
}

int htoi(char *s){
	int i,result,x;
	int length = strlen(s) - 3;
	int number[length];
	result = 0;
	x = 0;

	for(i=0; *(s+i)=='0' || *(s+i)=='x' || *(s+i)=='X'; s++)
		;

	for(i=0; *(s+i) != '\n'; i++){
		if(*(s+i) >= 0x41 && *(s+i) <= 0x46)
			number[i] = *(s+i) - 0x41 + 10;
		else if(*(s+i) >= 0x61 && *(s+i) <= 0x66)
			number[i] = *(s+i) - 0x61 + 10;
		else
			number[i] = *(s+i) - '0';
	}

	
	for (i=length-1; i >= 0; i--){
		result += number[i] * pow(16,x);
		x++;
	}

	return result;
}
