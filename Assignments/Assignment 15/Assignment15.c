#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PAUSE system("pause");
#define CLS system("cls");
#define MAXELEMENTS 5000

void displayArray(int a[], char m[]);
void displayTop(int a[], char m[]);
void displayBottom(int a[], char m[]);
char doTheSwitch(int a[], int i, char switchMade);

int main() {

	srand(time(NULL));

	int array[MAXELEMENTS];
	int size = sizeof(array) / sizeof(array[0]);
	int i, j, bottom;
	char switchMade;

	// Populate array with random numbers
	for (j = 0; j < size; j++)
	{
		array[j] = rand() % 100 + 1;
	}

	bottom = MAXELEMENTS - 1;

	// Display the unsorted array
	displayArray(array, "UNSORTED");

	// Sort the array
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

	// Display the sorted array
	displayArray(array, "SORTED");

	// Display the highest 5
	displayTop(array, "TOP");

	// Display the lowest 5
	displayBottom(array, "BOTTOM");

}

void displayTop(int a[], char m[])
{
	int i;

	printf("This is the %s five.\n", m);

	for (i = 0 + 4995; i < MAXELEMENTS; i++) {
		printf("Array[%i] contains %i\n", i, a[i]);
	}

	PAUSE;

}

void displayBottom(int a[], char m[])
{
	int i;

	printf("This is the %s five.\n", m);

	for (i = 0; i < 5; i++) {
		printf("Array[%i] contains %i\n", i, a[i]);
	}

	PAUSE;

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