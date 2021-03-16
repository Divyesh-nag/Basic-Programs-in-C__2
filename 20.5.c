#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	char *a,*b,*c;
	a=(char*)calloc(30,sizeof(char));
	b=(char*)calloc(30,sizeof(char));
	c=(char*)calloc(60,sizeof(char));
	printf("Enter String 1: ");
	scanf("%[^\n]", a);
	printf("Enter String 2: ");
	getchar();
	scanf("%[^\n]", b);
	int i,j;
	for (i=0;a[i]!='\0';i++)
	{
		c[i]=a[i];
	}
	for (j=0;b[j]!='\0';j++,i++)
	{
		c[i]=b[j];
	}
	printf("The Concatenated String is : %s\n", c);
}
