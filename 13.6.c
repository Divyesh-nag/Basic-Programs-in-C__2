#include <stdio.h>
#include <conio.h>
void main()
{
	int m[100],n,i;
	printf("Enter the size of the array:\n");
	scanf("%d",&n);
	printf("Enter the elements of the array:\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
	}
	printf("The squares of the array is:\n");
	for (i=0;i<n;i++)
	{
		m[i]=(m[i])*(m[i]);
		printf("%d\n",m[i]);
	}
	getch();
}
