#include <stdio.h>
#include <stdlib.h>

#define PAUSE system("pause");
#define CLS system("cls");
#define FLUSH flush();

int enterNum();
int getSelection();

void displayMenu();
void flush();

int main()
{

	srand((unsigned)time(NULL));

	int userSelection;

	do
	{

		userSelection = getSelection();

		switch (userSelection)
		{

		case 1:
			CLS;

			enterNum();

			PAUSE;

			break;

		case 2:
			CLS;

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

			printf("Quitting...");

			break;

		default:
			printf("Invalid selection.\n");

			PAUSE;

			break;

		}
	} while (userSelection != 5);

}

int enterNum()
{

	int result;
	int num;

	printf("Enter amount of numbers you want to enter: ");
	scanf_s("%i", &result);

	for (int i = 0; i < result; i++)
	{
		printf("Number %i: ", i + 1);
		scanf_s("%i", &num);
	}

	return result;

}

void displayMenu()
{

	CLS;

	printf("================ Menu =================\n");
	printf("1. Enter a number\n");
	printf("2. Display highest number entered\n");
	printf("3. Display lowest number entered\n");
	printf("4. Display Average of Numbers entered\n");
	printf("5. Quit\n");
	printf("=======================================\n");

	printf("Enter your selection: ");

} // end displayMenu()

void flush()
{
	while (getchar() != '\n');
} // end flush()


int getSelection()
{
	int result;

	displayMenu();
	scanf_s("%i", &result);

	FLUSH;

	return result;
} // end getSelection()