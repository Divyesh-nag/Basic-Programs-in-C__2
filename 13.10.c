#include <stdio.h>
#include <conio.h> 
void main()
{
  	int arr[100],max,min,n,i;
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
	min=arr[0];
	for (i=0;i<n;i++)
  	{
    	if (arr[i]<min)
    		{
       			min=arr[i];
    	 	}
	}
	printf("The maximum value among the elements is:\n%d\n",max);
  	printf("The minimum value among the elements is:\n%d\n",min);
	printf("The sum of the max and min values is:\n%d\n",max+min);
	float sum=0.0; 
	for (i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	printf("The average of the elements of the array is:\n%.2f\n",sum/n);
	getch();
}
