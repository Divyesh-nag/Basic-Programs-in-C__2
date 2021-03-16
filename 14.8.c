#include<stdio.h>
#include <conio.h> 
void main()
{
  int m, n, i, j, A[100][100], B[100][100];
 
  printf("Enter the number of rows and columns of matrix:\n");
  scanf("%d%d", &m, &n);
  printf("Enter elements of the matrix:\n");
 
  for (i = 0; i < m; i++)
    for (j = 0; j < n; j++)
      scanf("%d", &A[i][j]);
   printf("The matrix is:\n\n");
  for (i=0; i<m;i++)
  	{
  		for (j=0;j<n;j++)
	  {
	  printf("  %d  ", A[i][j]);}
	  printf("\n");
	  }    
 	
 	
  for (i = 0; i < m; i++)
    for (j = 0; j < n; j++)
      B[j][i] = A[i][j];
 
  if (m == n) 
  {
    for (i = 0; i < m; i++)
    {
      for (j = 0; j < m; j++)
      {
        if (A[i][j] != B[i][j])
          break;
      }
      if (j != m)
        break;
    }
    if (i == m)
      printf("\nThe matrix is symmetric.\n");
    else
      printf("\nThe matrix isn't symmetric.\n");
  }
  else
    printf("The matrix isn't symmetric.\n");
 
  getch();
}
