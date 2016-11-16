void displayMenu();

int getSelection();

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
	} while (userSelection != 5);

} // end main


void displayMenu()
{

	CLS;

	printf("================ Menu =================\n");
	printf("1. Example 1\n");
	printf("2. Example 2\n");
	printf("3. Example 3\n");
	printf("4. Example 4\n");
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