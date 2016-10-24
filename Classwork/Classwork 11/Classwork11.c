/*	Written by: Omar Rahman
*	Date: 10/12/2016 @10:17AM EST
*	Purpose: Classwork 11
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define PAUSE system("pause");
#define CLS system("cls");
#define FLUSH flush();


int main() {

	int const LB = 0;
	int const UB = 100;
	int guess = 0;
	int guessCounter = 0;
	int maxGuesses = 10;
	int randNum = 0;

	srand((unsigned)time(NULL));
	randNum = LB + rand() % (UB - LB + 1);

	do {

		randNum = 1;

		printf("Guess a random number between 1 - 100 (Guess %i of %i): ", guessCounter + 1, maxGuesses);
		scanf_s("%i", &guess);
		guessCounter++;

		if (guess > randNum) {
			printf("Guess lower!\n");
		}
		else if (guess < randNum) {
			printf("Guess higher!\n");
		}
		else if (guess == randNum) {
			printf("Congrats you got it in %i tries!\n", guessCounter);
		}

	} while (guess == randNum || guessCounter < maxGuesses);

	PAUSE;

}