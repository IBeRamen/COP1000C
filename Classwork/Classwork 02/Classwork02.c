/*
*	Written by: Omar Rahman
*	Date: 9/7/2016
*	Purpose: printf and variables
*/

#define _CRT_NO_SECURE_WARNINGS

#include <stdlib.h>
#include <stdio.h>

main() {

	// Adds two numbers and displays the result
	// Does not need user input.

	int num1 = 5;
	int num2 = 6;
	int result = num1 + num2;

	printf("5 + 6 = %i\n", result);

	system("pause");

}