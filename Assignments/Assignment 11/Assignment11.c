/*
*	Written by: Omar Rahman
*	Date: 10/31/2016 @1:03AM EST
*	Purpose: Assignment 11
*/

#include <stdio.h>
#include <stdlib.h>

#define PAUSE system("pause");
#define CLS system("cls");
#define FLUSH flush();

int getSelection();

void calcPay(float wage, float hoursWorked, float regularPay, float overtimePay, float overtimeWorked, float grossPay);
void calcTax(float netPay, float grossPay, float federalTax, float medicalInsurance);
void calcNet(float federalTax, float grossPay, float medicalInsurance);
void flush();

int main()
{

	int userSelection;

	do
	{
		userSelection = getSelection();

		float wage = 0.0, hoursWorked = 0.0, federalTax = 0.0, medicalInsurance = 0.0, grossPay = 0.0,
			regularPay = 0.0, overtimePay = 0.0, overtimeWorked = 0.0, netPay = 0.0;

		switch (userSelection)
		{

		case 1:
			CLS;

			calcPay(wage, hoursWorked, regularPay, overtimePay, overtimeWorked, grossPay);

			PAUSE;

			break;

		case 2:
			CLS;

			calcTax(netPay, grossPay, federalTax, medicalInsurance);

			PAUSE;

			break;

		case 3:
			CLS;

			calcNet(federalTax, grossPay, medicalInsurance);

			PAUSE;

			break;

		case 4:
			CLS;

			printf("Exiting...\n");

			break;

		default:
			printf("Incorrect selection.\n");
		}
	} while (userSelection != 4);

}

// end main
void calcPay(float wage, float hoursWorked, float regularPay, float overtimePay, float overtimeWorked, float grossPay)
{

	CLS;

	printf("What is your hourly wage?: ");
	scanf_s("%f", &wage);

	printf("How many hours do you work a week? ");
	scanf_s("%f", &hoursWorked);

	if (hoursWorked <= 40) {
		regularPay = wage * hoursWorked;
		overtimePay = 0.0;
		overtimeWorked = 0.0;
	}
	else {
		overtimeWorked = hoursWorked - 40;
		overtimePay = wage * 1.5 * overtimeWorked;
		regularPay = wage * (hoursWorked - overtimeWorked);
	}

	grossPay = regularPay + overtimePay;

	printf("Gross Pay: %.2f\n", grossPay);
	printf("Regular Pay: %.2f\n", regularPay);
	printf("Overtime Pay: %.2f\n", overtimePay);



} // end calcPay

void calcNet(float netPay, float grossPay, float federalTax, float medicalInsurance)
{
	netPay = grossPay - federalTax - medicalInsurance;

	printf("Net Pay: %.2f\n", netPay);
}

void calcTax(float federalTax, float grossPay, float medicalInsurance)
{
	federalTax = 0.27 * grossPay;
	medicalInsurance = 0.14 * grossPay;

	printf("Federal Tax: %.2f\n", federalTax);
	printf("Medical Insurance Tax: %.2f\n", medicalInsurance);

} // end calcTax

void displayMenu()
{
	CLS;

	printf("================ Menu =================\n");
	printf("====== Start with 1 then go down ======\n");
	printf("1) Calculate pay (Gross, Regular and Overtime)\n");
	printf("2) Calculate taxes\n");
	printf("3) Calculate net pay\n");
	printf("4) Exit\n");
	printf("=======================================\n");

	printf("Enter selection: ");
} // end displayMenu

int getSelection()
{
	int	result;

	displayMenu();
	scanf_s("%i", &result);

	FLUSH;

	return result;
} // end getSelection

void flush()
{
	while (getchar() != '\n');
} // end flush