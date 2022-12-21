#include <stdio.h>

/*  Rewrite the temperature conversion program of Section 1.2 to use a function
for conversion.
*/

void FahrenheintToCelsius(int, int, int);

int main(void){
	int lower, upper, step;

	lower = 0; 	/* lower limit of temperature table*/
	upper = 300; 	/* upper limit */
	step = 20; 	/* step size */

	FahrenheintToCelsius(lower,upper,step);
	return 0;
}

void FahrenheintToCelsius(int lower, int upper, int step){
	float fahr, celsius; 
	fahr = lower;   
        puts(" ºF\tºC");
        while (fahr <= upper) {
                celsius = (5.0/9.0) * (fahr - 32.0);  
                printf("%3.0f %6.1f\n", fahr, celsius);
                fahr = fahr + step;
        }
	
}
