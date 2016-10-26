/*	Written by: Omar Rahman
*	Date: 10/26/2016 @10:30AM EST
*	Purpose: Classwork 14
*/

#include <stdio.h>
#include <stdlib.h>

#define PAUSE system("pause");
#define CLS system("cls");
#define FLUSH flush();

void displayAValue(int, int);
void flush();

int getAValue();

int main()
{

	int value;

	value = getAValue();
	displayAValue(value, value);

	PAUSE;

}

void displayAValue(int v1, int v2)
{

	for (int i = 0; i < v2; i++)
	{
		printf("The value is: %i\n", v1);
	}

}

int getAValue()
{
	int result;

	printf("Enter an integer: ");
	scanf_s("%i", &result);
	FLUSH;

	return result;
}

void flush()
{
	while (getchar() != '\n');
}