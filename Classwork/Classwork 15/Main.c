#include <stdio.h>
#include <stdlib.h>

#define PAUSE system("pause");
#define CLS system("cls");
#define MAXELEMENTS 15

void displayArray(int a[], char m[]);
char doTheSwitch(int a[], int i, char switchMade);

main() {

	int array[MAXELEMENTS] = { 54, 3, 1, 4, 32, 89, 78, 69, 15, 47, 23, 8, 9, 3, 99 };
	int i, bottom;
	char switchMade;

	bottom = MAXELEMENTS - 1;

	displayArray(array, "UNSORTED");

	do {
		switchMade = 'N';

		for (i = 0; i < bottom; i++)
		{
			if (array[i] > array[i + 1]) {
				switchMade = doTheSwitch(array, i, switchMade);
			}
		}
		bottom--;
	} while (switchMade == 'Y');

	displayArray(array, "SORTED");

}

void displayArray(int a[], char m[]) {

	int i;

	printf("The array is %s.\n", m);

	for (i = 0; i < MAXELEMENTS; i++) {
		printf("Array[%i] contains %i\n", i, a[i]);
	}

	PAUSE;
}

char doTheSwitch(int array[], int i, char switchMade) {

	char result = 'Y';

	int temp;
	temp = array[i];
	array[i] = array[i + 1];
	array[i + 1] = temp;

	return result;
}