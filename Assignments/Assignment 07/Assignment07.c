/*	Written by: Omar Rahman
*	Date: 10/16/2016 @7:32PM EST
*	Purpose: Assignment 07
*/

#include <stdio.h>
#include <stdlib.h>

#define PAUSE system("pause");
#define CLS system("cls");

int main()
{
	float assign1 = 0.0;
	float assign2 = 0.0;
	float assign3 = 0.0;
	float assign4 = 0.0;
	float assign5 = 0.0;
	float assign6 = 0.0;
	float assign7 = 0.0;
	float exam1 = 0.0;
	float exam2 = 0.0;
	float exam3 = 0.0;
	float exam4 = 0.0;
	float finalExam = 0.0;
	float min;
	float totalAssign;
	float assignGrade;
	float total;
	float classAvg;

	int maxPoints = 600;

	char  *letterGrade;
	
	// Ask the user for the first 5 assignments (Worth 100 points) each.
	// Loop if any assignment is over 100.
	do
	{
		printf("========================\n");
		printf("=====  Assignments  ====\n");
		printf("===== Each are <100 ====\n");
		printf("========================\n");
		printf("Enter score for Assignment 1: ");
		scanf_s("%f", &assign1);

		printf("Enter score for Assignment 2: ");
		scanf_s("%f", &assign2);

		printf("Enter score for Assignment 3: ");
		scanf_s("%f", &assign3);

		printf("Enter score for Assignment 4: ");
		scanf_s("%f", &assign4);

		printf("Enter score for Assignment 5: ");
		scanf_s("%f", &assign5);
	} while (assign1 > 100 || assign2 > 100 || assign3 > 100 || assign4 > 100 || assign5 > 100);

	CLS;

	// Ask the user for the first 2 assignments (Worth 50 points) each.
	// Loop if any assignment is over 50.
	do
	{
		printf("========================\n");
		printf("=====  Assignments  ====\n");
		printf("===== Each are < 50 ====\n");
		printf("========================\n");
		printf("Enter score for Assignment 6: ");
		scanf_s("%f", &assign6);

		printf("Enter score for Assignment 7: ");
		scanf_s("%f", &assign7);
	} while (assign6 > 50 && assign7 > 50);

	CLS;

	printf("========================\n");
	printf("=======   Exams   ======\n");
	printf("========================\n");
	printf("Enter score for Exam 1: ");
	scanf_s("%f", &exam1);

	printf("Enter score for Exam 2: ");
	scanf_s("%f", &exam2);

	printf("Enter score for Exam 3: ");
	scanf_s("%f", &exam3);

	printf("Enter score for Exam 4: ");
	scanf_s("%f", &exam4);

	printf("Enter score for Final Exam: ");
	scanf_s("%f", &finalExam);

	totalAssign = assign1 + assign2 + assign3 + assign4 + assign5 + assign6 + assign7;

	// Add the exam scores to an array
	float examScores[5] = { exam1, exam2, exam3, exam4, finalExam };
	min = examScores[0];

	// Find the lowest value of the exams
	for (int i = 0; i < 5; i++)
		if (examScores[i] < min)
			min = examScores[i];

	/*
	 * Calculations
	 * 
	 * maxPoints = 500 (Total of first 4 assignments) + 50 + 50 = 600
	 * Assignment Grade =  totalAssign / maxPoints
	 * total = Assignment Grade (assignGrade) + exam1 + exam2 + exam3 + exam4 + finalExam – lowest score (min)
	 * classAvg = total divided by 500
	 * 
	 */
	
	assignGrade = totalAssign / maxPoints * 100;
	
	total = assignGrade + exam1 + exam2 + exam3 + exam4 + finalExam - min;

	classAvg = total / 500;

	// Assign letter grade
	if (classAvg >= 0.9)
	{
		letterGrade = "A";
	}
	else if (classAvg >= 0.8)
	{
		letterGrade = "B";
	}
	else if (classAvg >= 0.7)
	{
		letterGrade = "C";
	}
	else if (classAvg >= 0.6)
	{
		letterGrade = "D";
	}
	else
	{
		letterGrade = "F";
	}

	// Print Results
	printf("========================\n");
	printf("=======    Class  ======\n");
	printf("=======    Grade  ======\n");
	printf("========================\n");
	printf("Total Assignment Points: %.2f\n", totalAssign);
	printf("Lowest Score (Voided): %.2f\n", min);
	printf("Percentage Grade: %.2f%%\n", classAvg * 100);
	printf("Letter Grade: %s\n", letterGrade);

	PAUSE;

}