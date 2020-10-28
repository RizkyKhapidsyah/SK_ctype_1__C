#include <stdio.h>
#include <conio.h>
#include <ctype.h>


int main()
{
	int ch = 'a';

	printf("Big %c\n", toupper(ch));
	printf("Little %c\n", tolower(ch));
	printf("What begins with %c?\n", ch);

	_getch();
	return(0);
}

