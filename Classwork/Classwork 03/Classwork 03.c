/*
*	Written by: Omar Rahman
*	Date: 9/12/2016
*	Purpose: Floats, printf formatters
*/

#include <stdlib.h>
#include <stdio.h>

// Define PAUSE and CLS
// PAUSE = Keeps the terminal open.
// CLS = Clears the terminal.
#define PAUSE system("pause")
#define CLS system("cls")

main() {

	// Initiate the variables of income. expenses and totalBalance
	float income = 0, expenses = 0;
	float totalBalance = 0.0;

	// Ask the user for their income.
	printf("What is your income?\t");
	scanf_s("%f", &income);

	// Ask the user for their expenses
	printf("What are your expenses?\t");
	scanf_s("%f", &expenses);

	// Calculate the totalBalance (income - expenses)
	totalBalance = income - expenses;

	// Display how much the user made, spent and their total balance.
	printf("Wow, you made $%.2f\n", income);
	printf("Wow, you spent $%.2f\n", expenses);
	printf("Wow, you have: $%.2f\n", totalBalance);

	// Pause the terminal screen.
	PAUSE;

}