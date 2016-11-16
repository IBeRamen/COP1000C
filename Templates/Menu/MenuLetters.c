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

		case 1:
			CLS;

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

	FLUSH;

	char toupper(result);
} // end getSelection()