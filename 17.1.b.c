//by using library function
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main ()
{
	char a[100];
	int length;
	printf("Enter a string: ");
	gets (a);
	length = strlen(a);
	printf("The length of the string is : %d", length);
	getch();
}
