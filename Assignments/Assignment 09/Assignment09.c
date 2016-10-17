/*	Written by: Omar Rahman
*	Date: 10/16/2016 @10:40PM EST
*	Purpose: Assignment 09
*/

#include <stdio.h>
#include <stdlib.h>

#define PAUSE system("pause");

int main()
{
	
	int rows, i, j;

	do
	{
		printf("Please input a number between 1 and 50: ");
		scanf_s("%i", &rows);
	} while (rows > 50);

	for (i = 1; i <= rows; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}

	PAUSE;
}