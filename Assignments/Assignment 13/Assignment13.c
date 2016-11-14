/*	
 *	Written by: Omar Rahman
 *	Date: 11/13/2016 @9:09PM EST
 *	Purpose: Assignment 13
*/

#include <stdio.h>
#include <stdlib.h>

#define PAUSE system("pause");
#define CLS system("cls");
#define FLUSH flush();

void displayArray(int arr[], int size);
void displayMenu();
void flush();

double getAverage(int arr[], int size);
double getSum(int arr[], int size);

int getSelection();

int main()
{

	int userSelection;
	int numbers[10] = { 0 };
	int sum;
	double avg;

	do
	{

		userSelection = getSelection();

		switch (userSelection)
		{

		case 1:
			CLS;

			for (int i = 0; i < 10; i++)
			{
				printf("Enter a number: ");
				scanf_s("%d", &numbers[i]);
				FLUSH;
			}

			PAUSE;

			break;

		case 2:
			CLS;

			sum = getSum(numbers, 10);
			printf("The sum is: %d\n", sum);

			PAUSE;

			break;

		case 3:
			CLS;

			avg = getAverage(numbers, 10);
			printf("The average is: %.2f\n", avg);

			PAUSE;

			break;

		case 4:
			CLS;

			displayArray(numbers, 10);

			PAUSE;

			break;

		case 5:

			CLS;

			printf("Qutting...\n");

			PAUSE;

			break;

		default:

			printf("Invalid seleciton.\n");

			PAUSE;

			break;

		}
	} while (userSelection != 5);
	
}

void displayArray(int arr[], int size)
{
	
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

} // end displayArray

void displayMenu()
{

	CLS;

	printf("================ Menu =================\n");
	printf("1. Enter numbers (10 numbers)\n");
	printf("2. Display sum of all numbers entered\n");
	printf("3. Display average of numbers entered\n");
	printf("4. Display all numbers entered\n");
	printf("5. Quit\n");
	printf("=======================================\n");

	printf("Enter your selection: ");

} // end displayMenu()

double getAverage(int arr[], int size)
{

	int i;
	double avg;
	double sum = 0;

	for (i = 0; i < size; i++)
	{
		sum += arr[i];
	}

	avg = sum / size;

	return avg;

} // end getAverage

double getSum(int arr[], int size)
{

	int i, sum = 0;

	for (i = 0; i < size; i++)
	{
		sum = sum + arr[i];
	}

	return(sum);
} // end getSum

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
} // end flush()