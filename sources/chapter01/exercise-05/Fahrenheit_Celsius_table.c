#include <stdio.h>

/* Modify the temperature conversion program to print the table in
reverse order, that is, from 300 degrees to O*/

int main(void){
	int fahr;
	
	puts(" ºF\tºC");
	for(fahr = 300; fahr > 0; fahr = fahr - 20)
		printf("%3d %6.1f\n",fahr, (5.0/9.0)*(fahr-32));

	return 0;
}
