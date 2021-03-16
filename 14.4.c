#include <stdio.h>
#include <conio.h>
void main ()
{	int n;
    printf("Enter the size of square matrix:\n");
	scanf("%d", &n);
	int a[50][50],i,j;
	printf("Input %d integer values:\n",n*n);
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);	
		}
	}
	printf("The entered matrix is:\n");
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("  %d  ",a[i][j]);	
		}
	printf("\n");
	}
	printf("The right diagonal elements are:\n");
	
	for(i=0;i<n;i++)
  {
     for(j=0;j<n;j++)
          {
              if(i==j)
                   printf("%d ",a[i][j]);
          }
      }
			printf("\nThe left diagonal elements are:\n");
	for(i=0;i<n;i++)
  {
     for(j=0;j<n;j++)
          {
              if((i+j)==n-1)
                   printf("%d ",a[i][j]);
          }
      }
			getch();
		}
		

	
	


