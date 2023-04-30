#include <stdio.h>
#include <math.h>
/*
Our binary search makes two tests inside the loop, when one would suffice (at
the price of more tests outside.) Write a version with only one test inside the loop and
measure the difference in run-time

binSearchWithOneTest -> 0,006s
binSearch 	     -> 0,004s
*/


int binSearchWithOneTest(int, int[],int);
int binSearch(int, int[], int);

int main(void){
	int a[] = {1,2,3,4,5};
	//printf("%d\n", binSearchWithOneTest(5,a,5));
	printf("%d\n", binSearch(5,a,5));
	return 0;
}

int binSearchWithOneTest(int value, int array[], int length){
	int low, mid, high;
	low = 0;
	high = length - 1;
	while(low != high){
		mid = (int) ceil((float)(low+high)/2);
		if(array[mid] > value)
			high =  mid - 1;
		else
			low = mid;
	}

	if(array[mid] == value)
		return mid;

	return -1;
}

int binSearch(int value, int array[], int length){
	int low, high, mid;
	low = 0;
	high = length - 1;
	while (low <= high) {
		mid = (low+high)/2;
		if (value < array[mid])
			high = mid + 1;
		else if (value > array[mid])
			low = mid + 1;
		else
 			/* found match */
			return mid;
	}
	return -1;
}
