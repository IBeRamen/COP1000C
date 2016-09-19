/*
*	Written by: Omar Rahman
*	Date: 9/19/2016
*	Purpose: If statements
*/

#include <stdio.h>
#define PAUSE system("pause");

main() {

	// Initialize the float variable
	float grade;

	// Ask the user for their grade (%f for grades that require decimals)
	printf("What is your grade? ");
	scanf_s("%f", &grade);

	// If their grade is greater than 80 then print out that they are awesome.
	// Note: {} are optional.
	if (grade > 80)
		printf("WOW! Good job, you are the best!\n");
	// If the statement above is false (Example: Their grade is not above 80) then tell them to study.
	else
		printf("Please take some time to study.\n");

	PAUSE;
}