/*
*	Written by: Omar Rahman
*	Date: 10/3/2016 @10:11AM EST
*	Purpose: Classwork 06
*/

#include <stdio.h>

#define PAUSE system("pause");

int main() {

	int total = 0;
	int score = 0;
	int i;

	for (i = 0; i < 10; i++) {
		printf("Enter the score of %i of %i: ", i + 1, 10);
		scanf_s("%i", &score);
		total += score;
	}
	printf("The total of the scores is %i\n", total);
	
	/* Print name 1,000,000 times w/ while loop */

	/*
		int i = 1;

		while (i < 1000001) {

			printf("(%i) Dank Memes\n", i);
			i++;

		}
	*/

	/* Print name 1,000,000 times w/ for loop */

	/*
	int i;

	for (i = 1; i < 1000001; i++) {
		printf("(%i) Omar Rahman\n", i);
	}
	*/

	/* Notes */

	/*
	Pre Test loop = occurs 0 or more times
	while (condition) {
		used in general, when other two aren't used;
	} // end while

	Post Test loop = occurs 1 or more
	do {
		use with a menu system;
	} while(condition);

	Pre Test loop = occurs 0 or more times
	for(loop control variable; condition; increment;) {
		used when number of times to loop;
		used with arrays;
	}
	*/

	/* Just for fun */

	/*
	int x = 5;
	while (x < 10) {
		printf("D\n");
		printf(" a\n");
		printf("  n\n");
		printf("   k\n");
		printf("    M\n");
		printf("   e\n");
		printf("  m\n");
		printf(" e\n");
		printf("s\n");
	}
	*/

	PAUSE;

}