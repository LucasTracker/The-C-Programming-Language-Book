#include <stdio.h>
#include <limits.h>
// Write a program to determine the ranges of char, short, int, and long
// variables, both signed and unsigned, by printing appropriate values from standard headers
// and by direct computation

/* Range of Char Type by Computation */
#define CUCHAR_MAX (2 << 7) - 1 	// 255
#define CSCHAR_MIN (2 << 6) * -1	// -128
#define CSCHAR_MAX (2 << 6) - 1		// 127

/* Range of Short Type  by Computation */
#define CUSHRT_MAX (2U << 15)		// 65536
#define CSHRT_MIN  (2 << 14) * -1	// -32768
#define CSHRT_MAX  (2 << 14) - 1	// 32767
	
/* Range of Int Type by Computation */
#define CCUINT_MAX  (2UL << 31) - 1	// 4294967295
#define CINT_MIN   (2 << 30) * -1	// -2147483648
#define CINT_MAX   (2 << 30) - 1	// 2147483647

/* Range of Long Type By Computation */
#define NULONG_MAX  (2LU << 63) - 1	// 18446744073709551615	
#define NLONG_MIN  (2L << 62) * -1	// -9223372036854775808
#define NLONG_MAX  (2L << 62) - 1	// 9223372036854775807

int main(void){

	/* limits.h*/
	puts("Range of each type in header file limits.h \n");
	puts("****************** Range of Char ******************************************");
	printf("Unsigned Char ->	 0    >> %d\n" ,UCHAR_MAX);
	printf("Signed Char ->		%d  >> %d\n\n", SCHAR_MIN, SCHAR_MAX);

	puts("***************** Range of Short ******************************************");
	printf("Unsigned Short ->	 0      >> %d\n",USHRT_MAX);
	printf("Signed Short -> 	%d  >> %d\n\n",SHRT_MIN,SHRT_MAX);

	puts("***************** Range of Int ********************************************");
	printf("Unsigned Int ->		0		>> %ld\n", UINT_MAX);
	printf("Signed Int ->	       %d	>> %d\n\n", INT_MIN, INT_MAX);

	puts("***************** Range of Long *******************************************");
        printf("Unsigned Int ->         0               	  >> %lu\n", ULONG_MAX);
        printf("Signed Int ->          %ld       >> %ld\n\n", LONG_MIN, LONG_MAX);

	puts("Range of each type by computation\n");
	puts("****************** Range of Char ******************************************");
        printf("Unsigned Char ->         0    >> %d\n" , CUCHAR_MAX);
        printf("Signed Char ->          %d  >> %d\n\n", CSCHAR_MIN, CSCHAR_MAX);
	
	puts("***************** Range of Short ******************************************");
        printf("Unsigned Short ->        0      >> %d\n",CUSHRT_MAX);
        printf("Signed Short ->         %d  >> %d\n\n",CSHRT_MIN,CSHRT_MAX);	
	
	puts("***************** Range of Int ********************************************");
        printf("Unsigned Int ->         0               >> %ld\n", CCUINT_MAX);
        printf("Signed Int ->          %d      >> %d\n\n", CINT_MIN, CINT_MAX);

	puts("***************** Range of Long *******************************************");
        printf("Unsigned Int ->         0                         >> %lu\n", NULONG_MAX);
        printf("Signed Int ->          %ld       >> %ld\n\n", NLONG_MIN, NLONG_MAX);

	return 0;
}
