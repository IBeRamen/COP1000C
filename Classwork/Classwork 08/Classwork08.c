/*	Written by: Omar Rahman
*	Date: 10/5/2016 @10:52AM EST
*	Purpose: Assignment 08 (Generating a random number)
*/

#include <stdio.h>
#include <time.h>

#define PAUSE system("pause");

main() {

	int number, i;
	int const LB = 0;
	int const UB = 1000;

	srand((unsigned)time(NULL));

	for (i = 0; i < 25; i++) {
		number = LB + rand() % (UB - LB + 1);
		printf("%i) The number is: %i\n", i, number);
	}
	PAUSE;

}