#include <stdio.h>
#include <conio.h>
void main ()
{
int n;
printf("Enter the size of array A and B\n");
scanf("%d",&n);
int A[100],B[100],C[100];
printf("Enter the numbers which to be stored in array A\n");
int i;
for(i=0;i<n;i++)
{
scanf("%d",&A[i]);
}
printf("Enter the numbers which to be stored in array B\n");
int j;
for (j=0;j<n;j++)
{
scanf("%d",&B[j]);
}
printf("The value of the array C are\n");
for (i=0,j=0;i<n,j<n;i++,j++)
{
	C[100]=A[i]+B[j];
	printf("%d\n",C[100]);
	
}
getch();
}
