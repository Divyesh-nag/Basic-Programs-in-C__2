// extract the last character of each word
#include <stdio.h>
#include <string.h>
void main ()
{
	char a[50];
	printf("Enter a string : ");
	gets(a);
	int i;
	printf("The last character of each word is : ");
	for (i=0;a[i]!='\0';i++)
	{
		if (a[i]==' ')
		{
			printf(" %c ", a[i-1]);
		}
		
	}
	printf(" %c ", a[i-1]);
}

