#include <stdio.h>
#include <conio.h>
void main ()
{
	int m[100],n,i,even=0,odd=0,sum1=0,sum2=0;
	printf("Enter the number of elements of the array:\n");
	scanf("%d",&n);
	printf("Enter the elements of the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
	
	if(m[i]%2==0)
	{
		sum1=sum1+m[i];
	}
	else
	{
		sum2=sum2+m[i];
	}
	}
	printf("The sum of even numbers in the array is: %d\nThe sum of odd elements in the array is: %d",sum1,sum2);
	getch();
}
