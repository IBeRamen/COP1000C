/*	Written by: Omar Rahman
*	Date: 10/5/2016 @11:36AM EST
*	Purpose: Classwork 09 (Lottery Game)
*/

#include <stdio.h>
#include <time.h>

#define PAUSE system("pause");

main() {

	int const LB = 0;
	int const UB = 999;
	int i;
	int theFavoriteNo = 0;
	int theDailyNo = 0;
	int winCount = 0;
	int money = -395;

	srand((unsigned)time(NULL));

	printf("Enter your favorite lottery number: ");
	scanf_s("%i", &theFavoriteNo);

	for (i = 0; i < 365; i++) {
		theDailyNo = LB + rand() % (UB - LB + 1);

		if (theFavoriteNo == theDailyNo) {
			money += 500;
			winCount++;
		}
	}

	if (winCount == 0) {
		printf("You are a big loser HAH!\n");
	}
	else {
		printf("Wow you won %i times\n", winCount);
	}
	printf("You have %i money\n", money);

	PAUSE;

}