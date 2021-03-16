#include <stdio.h>
#include <conio.h>
void main ()
{	int n;
    printf("Enter the size of the array:\n");
	scanf("%d", &n);
	int a[100][100],i,j;
	printf("Input %d integer values:\n",n*n);
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);	
		}
	}
	int k=0,m;
	for (i=0;i<n;i++)
	{
		for (j=k;j<n;j++)
		{
			printf("%d  ",a[i][j]);	
			
			}
			k++;
			printf("\n");
			for (m=0;m<k;m++)
			{
				printf("   ");
			}
			}
		
		
			getch();
		}
		

	
	


