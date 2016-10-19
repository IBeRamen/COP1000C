/*	Written by: Omar Rahman
*	Date: 10/10/2016 @10:13AM EST
*	Purpose: Assignment 10 (Menus)
*/

#include <stdio.h> 
#include <stdlib.h>
#define PAUSE system("pause"); 
#define CLS system("cls");

main() {

	int userChoice;
	int num1, i, j;

	do {
		// The Menu
		printf("=============\n");
		printf("- Main Menu -\n");
		printf("=============\n");
		printf("1) Square a number.\n");
		printf("2) Find out if a number is odd/even.\n");
		printf("3) Print fancy shapes!\n");
		printf("4) Quit\n");
		printf("=============\n");

		// Get user selection
		printf("Enter selection: ");
		scanf_s("%i", &userChoice);

		// Decision making (switch and cases)
		switch (userChoice) {
			
		// Square a number and display the result
		case 1:
			CLS;
			printf("Welcome to case 1! Why are you here?\n");
			printf("I'll tell you why, give me a number and I'll square it: ");
			scanf_s("%i", &num1);
			printf("The square of %i is %i.\n", num1, num1 * num1);
			PAUSE;
			break;

		case 2:
			CLS;
			printf("Welcome to case 2! Where you can be odd.\n");
			printf("Enter an int and see what happens: ");
			scanf_s("%i", &num1);

			if (num1 % 2 == 0)
				printf("The number %i is even.\n", num1);
			else
				printf("The number %i is odd.\n", num1);
			PAUSE;
			break;

		case 3:
			CLS;
			do {
				printf("Welcome to case 3! Where the sun ALWAYS shines.\n");
				printf("Enter the number of rows for a triangle! (Has to be <= 50): ");
				scanf_s("%i", &num1);

				if (num1 > 50) {
					printf("Please enter a number less than 50.");
					PAUSE;
				}
			} while (num1 > 50);

			// Challenge
			// Do diamond
			// Rectangle
			// Split up diamond
			for (i = 0; i < num1; i++) {
				for (j = 0; j <= i; j++) {
					printf("*");
				}
				printf("\n");
			}
			PAUSE;
			break;

		case 4:
			printf("Bye!\n");
			PAUSE;
			break;

		default:
			printf("Invalid selection\n");
			PAUSE;
			break;

		}
	} while (userChoice != 4);

	PAUSE;
}