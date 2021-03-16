#include <stdio.h>
#include <conio.h>
void main ()
{
	int m[100],n,i,even=0,odd=0;
	printf("Enter the number of elements of the array:\n");
	scanf("%d",&n);
	printf("Enter the elements of the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
	
	if(m[i]%2==0)
	{
		even++;
	}
	else
	{
		odd++;
	}
	}
	printf("The number of even numbers in the array is: %d\nThe number of odd elements in the array is: %d",even,odd);
	getch();
}
