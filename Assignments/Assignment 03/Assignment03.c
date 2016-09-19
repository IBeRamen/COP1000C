/*
*	Written by: Omar Rahman
*	Date: 9/18/2016 @9:26PM EST
*	Purpose: Assignment 03
*/

#include <stdio.h>
#define PAUSE system("pause");

main() {

	int val1, val2, val3, val4, val5, val6;

	printf("Please enter the value for Value 1: ");
	scanf_s("%d", &val1);

	printf("Please enter the value for Value 2: ");
	scanf_s("%d", &val2);

	val3 = val1 / val2;
	val4 = val1 + val2 + val3;
	val5 = val1 * val1;
	val6 = val3 + val1 + val2 * 2;

	printf("Value 1 / Value 2 is %d\n", val3);
	printf("Value 1 + Value 2 + Value 3 is %d\n", val4);
	printf("Value 1 * Value 1 (Squared) is %d\n", val5);
	printf("(Value 3 + Value 1 + Value 2) * 2 is %d\n", val6);

	PAUSE;

}