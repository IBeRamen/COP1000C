/*
*	Written by: Omar Rahman
*	Date: 9/8/2016 @11:05am EST
*	Purpose: Assignment 02
*/

#include <stdio.h>

main() {

	// Ask the user for an input of two numbers and
	// get the sum of both numbers then output it.
	// scanf_s is recommended if you want to use
	// scanf add #define _NO_SECURE_WARNINGS outside of main()

	int num1;
	int num2;

	printf("Type in number 1: ");
	scanf_s("%d", &num1);
	
	printf("Type in number 2: ");
	scanf_s("%d", &num2);

	printf("The sum of the two numbers is: %d", num1 + num2);

	printf("\n");

	system("pause");

}