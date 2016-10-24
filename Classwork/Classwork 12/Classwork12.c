/*	Written by: Omar Rahman
*	Date: 10/24/2016 @10:13AM EST
*	Purpose: Classwork 12
*/

#include <stdio.h>
#include <stdlib.h>

#define PAUSE system("pause");
#define CLS system("cls");

void displayMessage();

int main()
{

	displayMessage("Hello Functions", 128);

	PAUSE;

}

void displayMessage(char mess[], int i)
{
	int j;


	for (j = 0; j < i; j++) {
		printf("%i) %s\n", j + 1, mess);
	}

}