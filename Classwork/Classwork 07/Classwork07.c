/*
*	Written by: Omar Rahman
*	Date: 10/5/2016 @10:22AM
*	Purpose: Classwork 07 (do while loops)
*/

#include <stdio.h>

#define PAUSE system("pause");
#define CLS system("cls");

main() {

	int total = 0;
	int amtSold = 0;
	int howMany = 0;
	float average = 0.0;

	do {
		printf("How many hammers did you sell [-999 to quit]: ");
		scanf_s("%i", &amtSold);

		if (amtSold == -999) {
			average = (float)total / (float)howMany;
			printf("1) How many transactions: %i\n", howMany);
			printf("2) How many hammers sold: %i\n", amtSold);
			printf("3) Average number of hammers per transaction: %.2f\n", average);
			PAUSE;
		}
		else {
			total += amtSold;
			howMany++;
		}
	} while (amtSold != -999);

}