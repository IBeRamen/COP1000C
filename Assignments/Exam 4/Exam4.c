/*
* Project Name: Exam 4
* Author: Omar Rahman
* Date: 12/4/2016
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PAUSE system("pause");
#define CLS system("cls");
#define FLUSH flush();
#define MAXELEMENTS 20

void displayMenu();
void flush();
int getSelection();

void enterKeys();


int main()
{
	int userSelection;

	// Declare parallel arrays
	int keyboardCodes[] = {
		32, 33, 34, 35, 36, 37,
		38, 39, 40, 41, 42, 43, 44, 45,
		46, 47, 48, 49, 50, 51, 52, 53,
		54, 55, 56, 57, 58, 59, 60, 61,
		62, 63, 64, 65, 66, 67, 68, 69,
		70, 71, 72, 73, 74, 75, 76, 77,
		78, 79, 80, 81, 82, 83, 84, 85,
		86, 87, 88, 89, 90, 91, 92, 93,
		94, 95, 96, 97, 98, 99, 100, 101,
		102, 103, 104, 105, 106, 107, 108,
		109, 110, 111, 112, 113, 114, 115,
		116, 117, 118, 119, 120, 121, 122
	};
	char *keyboardWords[] = {
		"spacebar",
		"!", "\"", "#", "$", "%", "&", "'",
		"(", ")", "*", "+", ",", "-", ".",
		"/", "0", "1", "2", "3", "4", "5",
		"6", "7", "8", "9", ":", ";", "<",
		"=", ">", "?", "@", "A", "B", "C",
		"D", "E", "F", "G", "H", "I", "J",
		"K", "L", "M", "N", "O", "P", "Q",
		"R", "S", "T", "U", "V", "W", "X",
		"Y", "Z", "[", "\\","]", "^", "_",
		"`", "a", "b", "c", "d", "e", "f",
		"g", "h", "i", "j", "k", "l", "m",
		"n", "o", "p", "q", "r", "s", "t",
		"u", "v", "w", "x", "y", "z"
	};
	int parrCodes[] = {
		0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
		11, 12, 13, 14, 15, 16, 17, 18, 19,
		20, 21, 22, 23, 24, 25, 26, 27, 28,
		29, 30, 31, 32, 33, 34, 35, 36, 37,
		38, 39, 40, 41, 42, 43, 44, 45, 46,
		47, 48, 49, 50, 51, 52, 53, 54, 55,
		56, 57, 58, 59, 60, 61, 62, 63, 64,
		65, 66, 67, 68, 69, 70, 71, 72, 73,
		74, 75, 76, 77, 78, 79, 80, 81, 82,
		83, 84, 85, 86, 87, 88, 89, 90, 91
	};

	char keysPressed[1000] = { 0 };

	do
	{
		userSelection = getSelection();

		switch (userSelection)
		{

		case 1:
			CLS;

			printf("Press some key(s)");
			scanf_s("%s", keysPressed);

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

			for (int i = 0; i <= 90; i++) {
				printf("Key: %s, Code: %d, Parallel: %s \n",
					keyboardWords[i], keyboardCodes[i], keyboardWords[parrCodes[i]]);
			}

			PAUSE;

			break;

		case 6:
			CLS;

			break;

		default:

			PAUSE;

			break;
		}
	} while (userSelection != 6);

	return 0;
}

void displayMenu()
{

	CLS;

	printf("================ Menu =================\n");
	printf("1. Press key(s) on the keyboard\n");
	printf("2. Display keys pressed (High to Low)\n");
	printf("3. Display never pressed key(s)\n");
	printf("4. Display most pressed key\n");
	printf("5. Display parallel array\n");
	printf("6. Quit\n");
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

void flush()
{
	while (getchar() != '\n');
} // end flush();

void enterKeys()
{
	char array[20];

	fgets(array, 20, stdin);

	array[strlen(array) - 1] = '\0';

	printf("The user has entered '%s'\n", array);
}