#include <stdio.h>
#include <conio.h>
void main ()
{
int A[100][100],m,n,i,j;
printf("Enter the no. of rows of the matrix: ");
scanf("%d", &m);
printf("Enter the no. of columns of the matrix: ");
scanf("%d", &n);
printf("Enter the elements of the matrix:\n");
for (i=0;i<m;i++)
{
	for (j=0;j<n;j++)
	{
		scanf("%d", &A[i][j]);
	}
}
printf("The matrix is:\n");
for (i=0;i<m;i++)
{
	for (j=0;j<n;j++)
	{
		printf("  %d  ", A[i][j]);
	}
	printf("\n");
}
printf("The transpose of the matrix is:\n");
for (j=0;j<n;j++)
{
	for (i=0;i<m;i++)
	{
		printf("  %d  ", A[i][j]);
	}
	printf("\n");
}
getch();
}
