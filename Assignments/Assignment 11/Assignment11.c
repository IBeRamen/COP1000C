/*
*	Written by: Omar Rahman
*	Date: 10/27/2016 @11:45AM EST
*	Purpose: Assignment 11
*/

#include <stdio.h>
#include <stdlib.h>

#define PAUSE system("pause");
#define CLS system("cls");
#define FLUSH flush();

int getSelection();

void calcPay(float , float);
void flush();

int main()
{
	
	int userSelection;
	float wage;
	float hoursWorked;

	do
	{
		userSelection = getSelection();

		switch (userSelection)
		{

		case 1: 
			CLS;

			calcPay(wage, hoursWorked);

			PAUSE;

			break;

		case 2:
			CLS;

			printf("Case 2\n");

			PAUSE;

			break;

		case 3:
			CLS;

			printf("Case 3\n");

			PAUSE;

			break;

		case 4:
			CLS;

			printf("Exiting...\n");

			PAUSE;

			break;

		default:
			printf("Incorrect selection.\n");
		}
	} while (userSelection != 4);

} // end main

void calcPay(float wage, float hoursWorked)
{
	float regularPay;

	regularPay = wage * hoursWorked;
} // end calcPay

void displayMenu()
{
	CLS;

	printf("================ Menu =================\n");
	printf("1) Calculate pay (Gross, Regular and Net)\n");
	printf("2) Calculate taxes\n");
	printf("3) Calculate overtime\n");
	printf("4) Exit\n");
	printf("=======================================\n");

	printf("Enter selection: ");
} // end displayMenu

int getSelection()
{
	int	result;

	displayMenu();
	scanf_s("%i", &result);

	FLUSH;

	return result;
} // end getSelection

void flush()
{
	while (getchar() != '\n');
} // end flush