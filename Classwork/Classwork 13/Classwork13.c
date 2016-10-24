/*	Written by: Omar Rahman
*	Date: 10/24/2016 @10:24AM EST
*	Purpose: Classwork 13
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define PAUSE system("pause");
#define CLS system("cls");
#define FLUSH flush();

char getSelection();

void addIt();
void cubeIt();
void displayMenu();
void flush();

int main()
{

	char userSelection;

	do
	{
		userSelection = getSelection();
		
		switch (userSelection)
		{

		// Cube a number
		case 'A':
			CLS;

			cubeIt();

			PAUSE;
			break;

		// Add two numbers together
		case 'B':
			CLS;

			addIt();

			PAUSE;

			break;

		// Display grade
		case 'C':
			CLS;

			displayGrade();

			PAUSE;
			break;
		
		// Quit
		case 'Q':
			CLS;

			printf("Bye!\n");

			PAUSE;
			break;

		default:
			printf("Invalid selection\n");

			PAUSE;

			break;

		} // end switch

	} while (userSelection != 'Q');

} // end main

void addIt()
{
	int num1;
	int num2;

	printf("Number 1 to add: ");
	scanf_s("%i", &num1);
	FLUSH;

	printf("Number 2 to add: ");
	scanf_s("%i", &num2);
	FLUSH;

	printf("The result is %i.\n", num1 + num2);
} // end of addIt

void cubeIt()
{
	int cubeNum;
	int cubeResult;

	CLS;

	printf("Enter a number to cube: ");
	scanf_s("%i", &cubeNum);

	FLUSH;

	cubeResult = cubeNum * cubeNum * cubeNum;
	printf("The cube of %i is %i.\n", cubeNum, cubeResult);

} // end of cubeIt

int displayGrade()
{
	int grade;
	
	printf("Enter your grade: ");
	scanf_s("%i", &grade);
	
	FLUSH;

	if (grade >= 90)
	{
		printf("A\n");
	}
	else if (grade >= 80)
	{
		printf("B\n");
	}
	else if (grade >= 70)
	{
		printf("C\n");
	}
	else if (grade >= 60)
	{
		printf("D\n");
	}
	else
	{
		printf("F\n");
	}

} // end of displayGrade

void displayMenu()
{

	CLS;

	printf("================ Menu =================\n");
	printf("A. Cube a number\n");
	printf("B. Add two numbers\n");
	printf("C. Display a letter grade for a score\n");
	printf("Q. Quit\n");
	printf("=======================================\n");

	printf("Enter your selection: ");

}

void flush()
{
	while (getchar() != '\n');
} // end of flush

char getSelection()
{
	char result;

	displayMenu();
	scanf_s("%c", &result);

	FLUSH;

	return toupper(result);
} // end of getSelection