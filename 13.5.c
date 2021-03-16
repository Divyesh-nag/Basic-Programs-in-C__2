#include <stdio.h>
#include <conio.h>
void main ()
{
	int r=0,m[100],n,i;
	printf("Enter the number of elements in the array:\n");
	scanf("%d",&n);
	printf("Enter the elements of the array:\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
	}
	r=m[0];
	m[0]=m[n-1];
	m[n-1]=r;
	printf("Therefore the new array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",m[i]);
	}
	getch();
}
	
