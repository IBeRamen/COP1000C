/*
*	Written by: Omar Rahman
*	Date: 9/28/2016 @10:06AM EST
*	Purpose: Assignment 06
*/

#include <stdio.h>

#define PAUSE system("pause");

main() {

	float week1, week2, week3, avgSpent = 0.0;

	printf("How much have you spent on groceries in Week 1?: ");
	scanf_s("%f", &week1);

	printf("How much have you spent on groceries in Week 2?: ");
	scanf_s("%f", &week2);

	printf("How much have you spent on groceries in Week 3?: ");
	scanf_s("%f", &week3);

	avgSpent = (week1 + week2 + week3) / 3;

	if (week1 < 50 || week2 < 50 || week3 < 50) {
		printf("You must be starving!\n");
	}
	else if (week1 > 50 || week2 > 50 || week3 > 50 && week1 < 200 || week2 < 200 || week3 < 200) {
		printf("You are eating well!\n");
	}
	else {
		printf("You spent: $%.2f\n", week1 + week2 + week3);
		printf("You are going to get fat.\n");
	}

	if (week2 > week1) {
		printf("Are you eating more?\n");
	}
	else if (week3 < week1 && week3 < week2) {
		printf("Are you on a diet?\n");
	}

	printf("Average amount you spent on groceries: $%.2f\n", avgSpent);

	PAUSE;

}