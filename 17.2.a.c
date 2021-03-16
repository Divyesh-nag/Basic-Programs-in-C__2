//copy one string into another 
#include <stdio.h>
#include <conio.h>
void main ()
{
	char a[100],b[100];
	printf("Enter a string : ");
	gets(a);
	int i;
	for(i=0;i<100;i++)
	b[i]=a[i];
	printf("The copy of the string is : %s ", b);
	getch();
}
