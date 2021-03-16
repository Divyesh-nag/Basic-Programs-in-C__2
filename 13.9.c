#include <stdio.h>
#include <conio.h> 
void main()
{
  	int arr[100],max,n,i;
 	printf("Enter the number of elements in array:\n");
  	scanf("%d",&n);
 	printf("Enter the elements of the array:\n");
 	for (i=0;i<n;i++)
  	{
  		scanf("%d", &arr[i]);
  	}
	max=arr[0];
 	for (i=0;i<n;i++)
  	{
    	if (arr[i]>max)
    		{
       			max=arr[i];
    		}	
  	}
	printf("The maximum value among the elements is:\n%d\n",max);
  	getch();
}
