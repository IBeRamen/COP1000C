/*
*	Written by: Omar Rahman
*	Date: 9/22/2016 @10:02AM EST
*	Purpose: Assignment 04
*/

#include <stdio.h>
#define PAUSE system("pause");

main() {

	// Weight is an int because you cannot use % (modulus) with double, float
	// Weight has to be an int, does not support doubles/float
	int weight, miles;
	float cost, milesCharge, overWeight;
	
	printf("What is the package weight (in pounds)? ");
	scanf_s("%i", &weight);

	printf("How many miles is this package being shipped? ");
	scanf_s("%f", &miles);

	// Calculations
	// milesCharge gets the miles the user inputed and divides it by 500 then * it by 10 (So $10 / 500)
	// overWeight gets the weight and finds the remainder of 15 to get the amount it's over 15
	milesCharge = (1 % 500) * 10;
	overWeight = weight % 15;

	// If the weight is less than or equal to 15 the rate is $15 + $10 per mile
	if (weight <= 15)
		cost = 15 + milesCharge;
	
	// Else multiply the amount overweight by 0.5 (For $0.50 per pound) + $10 per mile + $15 base rate
	else
		cost = (overWeight * 0.5) + milesCharge + 15;

	printf("Your total cost is: $%0.2f\n", cost);

	PAUSE;

}
