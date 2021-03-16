#include <stdio.h>
#include <conio.h>
void main ()
{
	int m[100],n,i;
	printf("Enter the number of elemnets of the array:\n");
	scanf("%d",&n);
	printf("Enter the elemnts:\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
	}
	printf("The elements in reverse oder is:\n");
    for (i=n-1;i>=0;i--)
    {
    	printf("%d\n",m[i]);
	}
	getch();
}

