/*
*	Written by: Omar Rahman
*	Date: 9/19/2016
*	Purpose: If statements
*/

#include <stdio.h>
#define PAUSE system("pause");

main() {

	int num;

	printf("What is the number on your mind? ");
	scanf_s("%i", &num);

	// The modulo operator (%) divides the two numbers and prints the remainder.
	// Example: 9 % 2 would output 1. 9 / 2 (2 goes into 9, 4 times with a remainder of 1) therefore
	// it will output 1.
	if (num % 2)
		printf("This number is odd!\n");
	else
		printf("This number is even!\n");

	PAUSE;

}