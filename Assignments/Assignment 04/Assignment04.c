/*
*	Written by: Omar Rahman
*	Date: 9/26/2016 @11:10AM EST
*	Purpose: Assignment 04 (Fixed)
*/

#include <stdio.h>
#include <stdlib.h>
#define PAUSE system("pause");

main() {

	// Decalare varibles
	int miles = 0;
	float weight, totalCost, mileCost, weightCost = 0.0;

	// Get Input
	printf("Weight of the package: ");
	scanf_s("%f", &weight);

	printf("Miles to be shipped: ");
	scanf_s("%i", &miles);

	// Calculations
	if (weight <= 15) {
		weightCost = 15;
	}
	else {
		weightCost = 15 + (weight - 15) * .5;
	}

	mileCost = miles / 500 * 10;

	if (miles % 500 != 0) {
		mileCost = mileCost + 10;
	}
	
	totalCost = weightCost + mileCost;

	// Output
	printf("Your total is: $% .2f\n", totalCost);

	PAUSE;

}