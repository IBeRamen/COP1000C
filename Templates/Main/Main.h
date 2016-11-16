#include <stdlib.h>
#include <stdio.h>

#define PAUSE system("pause");
#define CLS system("cls");
#define FLUSH flush();

void flush();

void flush()
{
	while (getchar() != '\n');
} // end flush();