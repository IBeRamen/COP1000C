/*
*	Written by: Omar Rahman
*	Date: 9/4/2016 @1:31AM EST
*	Purpose: Assignment 01
*/

#include <stdio.h>

int main() {

	// Print your name 15 names using a while loop.
	// Alternate method is to use printf("Your Name"); 15 times
	int i = 1;

	while (i < 16) {
		printf("%i) Omar Rahman\n", i);
		i++;
	}
	system("pause");

	return 0;

}