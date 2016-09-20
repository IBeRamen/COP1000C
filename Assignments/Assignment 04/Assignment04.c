/*
*	Written by: Omar Rahman
*	Date: 9/19/2016 @12:02PM EST
*	Purpose: Assignment 04
*/

#include <stdio.h>
#define PAUSE system("pause");

main() {

	int weight, miles, cost;

	printf("What is the package weight (in pounds)? ");
	scanf_s("%i", &weight);

	printf("How many miles is this package being shipped? ");
	scanf_s("%i", &miles);

	if (weight <= 15)
		cost = 15;
	else
		weight % 15 * 0.5;
		miles / 500 * 10;
		cost = weight + miles;

	printf("Your total cost is: $%i\n", cost);

	PAUSE;

}
