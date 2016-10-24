/*	Written by: Omar Rahman
*	Date: 10/23/2016 @9:47PM EST
*	Purpose: Assignment 10
*/

#include <stdio.h>
#include <stdlib.h>

#define PAUSE system("pause");
#define CLS system("cls");

int main()
{
	
	int const LB = 0;
	int const UB = 999;

	int favNum = 0;
	int lotteryNum;
	int moneySpent = 0;
	int profit = 0;
	int match = 0;
	int moneyWon = 0;

	srand((unsigned)time(NULL));

	printf("Enter your favorite number: ");
	scanf_s("%i", &favNum);

	for (int i = 0; i < 365; i++)
	{
		lotteryNum = LB + rand() % (UB - LB + 1);

		moneySpent++;

		if (favNum == lotteryNum)
		{
			match++;
			moneyWon = 500 * match;
			profit = moneyWon - moneySpent;
		}
		else
		{
			profit = moneyWon - moneySpent;
		}

	}

	printf("Your number matched %i times.\n", match);
	
	printf("You won ($500 per match): $%i\n", moneyWon);

	printf("Your total profit is: $%i\n", profit);

	PAUSE;

}
