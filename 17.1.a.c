//without using library function
#include <stdio.h>
#include <conio.h>
void main ()
{
    char a[100];
    int i;
    printf("Enter a string: ");
    gets(a);
    for(i = 0; a[i] != '\0'; i++)
	{
	
	}
    printf("Length of the string is : %d", i);
	getch();
}

