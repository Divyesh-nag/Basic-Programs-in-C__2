#include <stdio.h>
#include <conio.h>
void main ()
{
	int m,n;
	printf("Enter the no. of columns: ");
	scanf("%d",&m);
	printf("Enter the no. of rows: ");
	scanf("%d",&n);
	int A[100][100],B[100][100],i,j,C[100][100];
	printf("Enter the elements of matrix A:\n");
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			scanf("%d", &A[i][j]);
		}
	}
	printf("Enter the elements of matrix B:\n");
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			scanf("%d", &B[i][j]);
		}
	}	
		printf("The subtraction of the matrix is:\n");
		for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("%d  ",A[i][j]-B[i][j]);
		}
		printf("\n");
	}
	getch();
}
