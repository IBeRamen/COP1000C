/*
 * Project Name: Exam 4
 * Author: Omar Rahman
 * Date: 12/4/2016
 */

#include <stdio.h>
#include <stdlib.h>

#define PAUSE system("pause");
#define CLS system("cls");
#define FLUSH flush();
#define MAXELEMENTS 256

void displayMenu();
void flush();

int getSelection();

void displayArray(int a[], char m[]);
char doTheSwitch(int a[], int i, char switchMade);

int main()
{
	int userSelection;

	do
	{
		userSelection = getSelection();

		switch (userSelection)
		{

		case 1:
			CLS;

			int entered_keys[256] = { 0 };
			int requested_keys = 0;
			int i, bottom, j;
			char switchMade;

			bottom = MAXELEMENTS - 1;

			printf("How many keys do you want to enter?");
			scanf_s("%i", &requested_keys);

			for (i = 0; i < requested_keys; i++)
			{
				printf("Enter a value: ");
				scanf_s("%d", (entered_keys + i));
				FLUSH;
			}

			/*
			 * printf("\nEntered values:\n");
			for (i = 0; i < requested_keys; i++)
			{
				printf("%d\n", *(entered_keys + i));
			}
			 */

			PAUSE;

			break;

		case 2:
			CLS;

			do {
				switchMade = 'N';

				for (j = 0; j < bottom; j++)
				{
					if (entered_keys[j] < entered_keys[j + 1]) {
						switchMade = doTheSwitch(entered_keys, j, switchMade);
					}
				}
				bottom--;
			} while (switchMade == 'Y');

			displayArray(entered_keys, "SORTED");

			PAUSE;

			break;

		case 3:
			CLS;

			PAUSE;

			break;

		case 4:
			CLS;

			PAUSE;

			break;

		case 5:
			CLS;

			break;

		default:

			PAUSE;

			break;
		}
	} while (userSelection != 5);
}

void displayMenu()
{

	CLS;

	printf("================ Menu =================\n");
	printf("1. Press key(s) on the keyboard\n");
	printf("2. Display keys pressed (High to Low)\n");
	printf("3. Display never pressed key(s)\n");
	printf("4. Display most pressed key\n");
	printf("5. Quit\n");
	printf("=======================================\n");

	printf("Enter your selection: ");

} // end displayMenu()


int getSelection()
{
	int result;

	displayMenu();
	scanf_s("%i", &result);

	FLUSH;

	return result;
} // end getSelection()

char doTheSwitch(int array[], int i, char switchMade) {

	char result = 'Y';

	int temp;
	temp = array[i];
	array[i] = array[i + 1];
	array[i + 1] = temp;

	return result;
}

void displayArray(int a[], char m[]) {

	int i;

	printf("The array is %s.\n", m);

	for (i = 0; i < MAXELEMENTS; i++) {
		printf("Array[%i] contains %i\n", i, a[i]);
	}

	PAUSE;
}

void flush()
{
	while (getchar() != '\n');
} // end flush();