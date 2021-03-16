//copy by using library functions
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main ()
{
	char a[100], copy[100]; 
	printf("Enter string :");
	gets(a);
	strcpy(copy,a);
	printf("The copy of the string is: %s", copy);
	getch();
	
}
