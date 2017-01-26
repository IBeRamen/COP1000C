/*
*	Purpose: A template for a menu based system using LETTERS for selection.
*	You have to include stdlib, stdio. Define CLS, FLUSH and PAUSE for this 
*	to work or simply remove them.
*/

void displayMenu();

char getSelection();

int main()
{

	int userSelection;

	do
	{
		userSelection = getSelection();

		switch (userSelection)
		{

		case 'A':
			CLS;

			PAUSE;

			break;

		case 'B':
			CLS;

			PAUSE;

			break;

		case 'C':
			CLS;

			PAUSE;

			break;

		case 'D':
			CLS;

			PAUSE;

			break;

		case 'Q':
			CLS;

			PAUSE;

			break;

		default:

			PAUSE;

			break;
		}
	} while (userSelection != 'Q');

} // end main


void displayMenu()
{

	CLS;

	printf("================ Menu =================\n");
	printf("A. Example 1\n");
	printf("B. Example 2\n");
	printf("C. Example 3\n");
	printf("D. Example 4\n");
	printf("Q. Quit\n");
	printf("=======================================\n");

	printf("Enter your selection: ");

} // end displayMenu()


char getSelection()
{
	char result;

	displayMenu();
	scanf_s("%c", &result);

	return toupper(result); // change lower case selection to uppercase
} // end getSelection()