/*
*	Written by: Omar Rahman
*	Date: 9/26/2016 @1:32PM EST
*	Purpose: Assignment 05
*/

#include <stdio.h>

#define PAUSE system("pause");

main() {

	float wage, hoursWorked, regularPay, overtimePay, overtimeWorked, grossPay, federalTax, medicalInsurance, netPay = 0.0;

	printf("What is your hourly wage?: ");
	scanf_s("%f", &wage);

	printf("How many hours do you work a week?: ");
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
	federalTax = 0.27 * grossPay;
	medicalInsurance = 0.14 * grossPay;
	netPay = grossPay - federalTax - medicalInsurance;

	printf("Hourly Rate: $%.2f\n", wage);
	printf("Hours Worked: %.0f Hour(s)\n", hoursWorked);
	printf("Regular Pay: $%.2f\n", regularPay);
	printf("Overtime Worked: %.0f Hour(s)\n", overtimeWorked);
	printf("Overtime Pay: $%.2f\n", overtimePay);
	printf("Gross Pay (Weekly): $%.2f\n", grossPay);
	printf("Federal Tax (27%%): $%.2f\n", federalTax);
	printf("Medical Insurance (14%%): $%.2f\n", medicalInsurance);
	printf("Net Pay (Weekly): $%.2f\n", netPay);

	PAUSE;

}