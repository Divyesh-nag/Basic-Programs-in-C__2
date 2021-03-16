#include<stdio.h>
#include<stdlib.h>
int bubble_sort(int n,int *ar)
 {
    int i,j,temp;
    for(i=0; i<n;i++)
    {
        for(j=0; j<n-i-1;j++)
        {
            if(*(ar + j)>*(ar + j + 1))
            {
                temp = *(ar + j);
                 *(ar + j) = *(ar + j + 1);
                *(ar + j + 1) = temp;
            }
        }
    }

}
int main(void)
{
    int n,i;
    printf("Enter the size of the array : ");
   scanf("%d",&n);
    int *arr1 = (int *)calloc(n,sizeof(int));
    printf("Enter the elements of first array : \n");
     for(i=0;i<n;i++)
    {
        scanf("%d",(arr1+i));
    }
    bubble_sort(n,arr1);
    printf("After sorting, array is : \n");
    for(i=0;i<n;i++)
    { 
        printf("%d\t",*(arr1 + i));
    }
}
