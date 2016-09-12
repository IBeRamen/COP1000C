/*
*	Written by: Omar Rahman
*	Date: 9/12/2016
*	Purpose: Floats, printf formatters
*/

#include <stdlib.h>
#include <stdio.h>

#define PAUSE system("pause")
#define CLS system("cls")

main() {

	float income = 0, expenses = 0;
	float totalBalance = 0.0;

	printf("What is your income?\t");
	scanf_s("%f", &income);

	printf("What are your expenses?\t");
	scanf_s("%f", &expenses);

	totalBalance = income - expenses;

	printf("Wow, you made $%.2f\n", income);
	printf("Wow, you spent $%.2f\n", expenses);
	printf("Wow, you have: $%.2f\n", totalBalance);

	PAUSE;

}