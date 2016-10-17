/*	Written by: Omar Rahman
*	Date: 10/16/2016 @10:03PM EST
*	Purpose: Assignment 08
*/

#include <stdio.h>
#include <stdlib.h>

#define PAUSE system("pause");

int main ()
{
	
	char firstName[50] = "NULL";

	int loopAmt = 0;

	printf("What is your first name? (Max of 50 characters): ");
	scanf_s("%s", firstName);

	printf("How many times do you want to loop your name?: ");
	scanf_s("%i", &loopAmt);

	for (int i = 0; i < loopAmt; i++)
	{
		printf("%i) %s\n", i + 1, firstName);
	}

	PAUSE;

}