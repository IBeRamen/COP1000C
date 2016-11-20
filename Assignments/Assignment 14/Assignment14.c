/*
*	Written by: Omar Rahman
*	Date: 11/19/2016 @8:17PM EST
*	Purpose: Assignment 14
*/

#include <stdlib.h>
#include <stdio.h>

#define PAUSE system("pause");
#define CLS system("cls");
#define FLUSH flush();

void flush();
void displayMenu();

int getSelection();

float totalCost(float mileage, float gasPrice, float mpg, float amtDriven);
float displayMileage(float mileage);

int main()
{
	int userSelection;

	float mileage, gasPrice, mpg, amtDriven;

	do
	{
		userSelection = getSelection();

		switch (userSelection)
		{

		case 1:
			CLS;

			printf("What is your current mileage? ");
			scanf_s("%f", &mileage);
			FLUSH;

			printf("What is the price of gas per gallon? ");
			scanf_s("%f", &gasPrice);
			FLUSH;

			printf("What is your car's MPG? ");
			scanf_s("%f", &mpg);
			FLUSH;

			printf("How many miles did you drive? ");
			scanf_s("%f", &amtDriven);
			FLUSH;

			PAUSE;

			break;

		case 2:
			CLS;

			printf("Your total cost if you drove %.2f miles is $%.2f.\n", amtDriven, totalCost(mileage, gasPrice, mpg, amtDriven));

			PAUSE;

			break;

		case 3:
			CLS;

			printf("Your current mileage is %.2f.\n", displayMileage(mileage));

			PAUSE;

			break;

		case 4:
			CLS;

			printf("Quitting...\n");

			break;

		default:

			printf("Invalid selection.\n");

			break;
		}
	} while (userSelection != 4);
}

float totalCost(float mileage, float gasPrice, float mpg, float amtDriven)
{
	return amtDriven / mpg * gasPrice;
}

void displayMenu()
{

	CLS;

	printf("================ Menu =================\n");
	printf("1. Begin\n");
	printf("2. Cost of Trip (Including gas)\n");
	printf("3. Updated Mileage\n");
	printf("4. Quit\n");
	printf("=======================================\n");

	printf("Enter your selection: ");

} // end displayMenu()

float displayMileage(float mileage)
{
	return mileage;
}


int getSelection()
{
	int result;

	displayMenu();
	scanf_s("%i", &result);

	FLUSH;

	return result;
} // end getSelection()

void flush()
{
	while (getchar() != '\n');
} // end flush();