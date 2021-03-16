#include <stdio.h>
#include <conio.h>
void main ()
{
	int m[100],n,i,sum=0;
	printf("Enter the number of elements in the array:\n");
	scanf("%d",&n);
	printf("Enter the array elements:\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
	}
	for (i=0;i<n;i++)
	{
	    sum=sum+m[i];
	}
	printf("The sum of all the elements of the array is: %d",sum);
	
	getch();
	
}


