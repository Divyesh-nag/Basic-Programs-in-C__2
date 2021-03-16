#include<stdio.h>
void main()
{
    int a[100][100],m,n,i,j;
    int r;
    printf("Enter dimensions:\n");
    scanf("%d\n%d",&m,&n);
    printf("Enter %d elements:\n",m*n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    printf("\nMatrix is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        printf("%d  ",a[i][j]);
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        r=0;
        for(j=0;j<n;j++)
        r=r+a[i][j];
        printf("\nSum of row %d is: %d\n",i+1,r);
    }
    for(i=0;i<m;i++)
    {
        r=0;
        for(j=0;j<n;j++)
        r=r+a[j][i];
        printf("\nSum of column %d is: %d\n",i+1,r);
    }
}
