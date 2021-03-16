// extract the first character of each word
#include <stdio.h>
#include <string.h>
void main ()
{
	char a[50];
	printf("Enter a string : ");
	gets(a);
	int i;
	printf("The first character of each word is : ");
	printf(" %c ", a[0]);
	for (i=0;a[i]!='\0';i++)
	{
		if (a[i]==' ')
		{
			printf(" %c ", a[i+1]);
		}
		
	}
	printf(" %c ", a[i+1]);
}

