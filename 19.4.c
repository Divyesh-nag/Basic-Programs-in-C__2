#include <stdio.h>
struct complex
{
	int a[2];
	int b[2];	
}num;
int main (void)
{
	printf("  || THIS IS A PROGRAM TO CALCULATE THE SUM OF COMPLEX  NUMBERS IN THE FORM OF a + ib ||\n\n");
	
	int i;
	for (i=0;i<2;i++)
	{
		printf ("Enter the value of a%d and b%d:\n",i+1,i+1);
		scanf("%d%d", &num.a[i],&num.b[i]);
	}
	printf("The two numbers are:\n");
	for (i=0;i<2;i++)
	{
		printf("\n%d + %di",num.a[i],num.b[i]);
	}
	int sum1=0,sum2=0;
	for (i=0;i<2;i++)
	{
		sum1=sum1+num.a[i];
		sum2=sum2+num.b[i];
	}
	printf("\n\nThe sum of the complex numbers is : %d + %di ", sum1,sum2);
	
}
