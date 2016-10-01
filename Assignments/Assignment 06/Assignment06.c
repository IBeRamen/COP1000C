/*	Written by: Omar Rahman 
 *	Date: 10/1/2016 @12:47AM EST 
 *	Purpose: Assignment 06
 */

#include <stdio.h> 
#define PAUSE system("pause"); 

int main()
{
	float week1, week2, week3, avgSpent = 0.0; 
	
	printf("How much have you spent on groceries in Week 1?: "); 
	scanf_s("%f", &week1); 
	printf("How much have you spent on groceries in Week 2?: "); 
	scanf_s("%f", &week2); 
	printf("How much have you spent on groceries in Week 3?: "); 
	scanf_s("%f", &week3);

	avgSpent = (week1 + week2 + week3) / 3;
	
	// Week 01
	if (week1 < 50)
	{
		printf("Week 1: You must be starving!\n");
	}
	else if (week1 >= 50 && week1 < 200)
	{
		printf("Week 1: You are eating well!\n");
	}
	else
	{
		printf("Week 1: Amount spent: $%.2f. You are going to get fat\n", week1);
	}

	// Week 02
	if (week2 < 50)
	{
		printf("Week 1: You must be starving!\n");
	}
	else if (week2 >= 50 && week2 < 200)
	{
		printf("Week 2: You are eating well!\n");
	}
	else
	{
		printf("Week 2: Amount spent: $%.2f. You are going to get fat\n", week2);
	}

	// Week 03
	if (week3 < 50)
	{
		printf("Week 3: You must be starving!\n");
	}
	else if (week3 >= 50 && week3 < 200)
	{
		printf("Week 3: You are eating well!\n");
	}
	else
	{
		printf("Week 3: Amount spent: $%.2f. You are going to get fat\n", week3);
	}

	if (week2 > week1)
	{
		printf("=> You spent more in Week 2 compared to Week 1 are you eating more?\n");
	}

	if (week3 < week1 && week3 < week2)
	{
		printf("=> You spent less in Week 3 compared to Week 1 and Week 2. Are you on a diet?\n");
	}

	printf("=> Average amount spent: $%.2f\n", avgSpent);

	PAUSE;

}