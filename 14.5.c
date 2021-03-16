#include <stdio.h>
#include <conio.h>
void main ()
{
	int m,n;
	printf("Enter the no. of columns: ");
	scanf("%d",&m);
	printf("Enter the no. of rows: ");
	scanf("%d",&n);
	int A[100][100],i,j;
	printf("Enter the elements of matrix A:\n");
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			scanf("%d", &A[i][j]);
		}
	}
	int max,min,arr[0][0];
		printf("\n");
		max=arr[0][0];
	for (i=0;i<m;i++)
  	{
  		for (j=0;j<n;j++)
    {
			if (A[i][j]>max)
    		{
       			max=A[i][j];
    	 	}
	}
}
	min=arr[0][0];
	for (i=0;i<m;i++)
  	{
    for (j=0;j<n;j++)
    {
	
		if (A[i][j]<min)
    		{
       			min=A[i][j];
    	 	}
	}
}
	printf("The maximum value among the elements is:\n%d\n",max);
  	printf("The minimum value among the elements is:\n%d\n",min);
	printf("The sum of the max and min values is:\n%d\n",max+min);
	
	getch();
}
