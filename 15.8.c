#include <stdio.h>
#include <conio.h>
int palin ();
void main ()
{
	int n,p;
	printf("Enter a number: ");
	scanf("%d", &n);
	p=palin(n);
	getch();
}

int palin(int m)
{
	int rev,org,rem;
	org=m;
	while(m!=0)
	{
		rem=m%10;
		rev=(rev*10)+rem;
		m=m/10;
	}
	
	if (org==rev)
	{
		printf("The entered number is a pallindrome.\n");
	}
	else
	{
		printf("The entered number is not a pallindrome.\n");
	}
	return (0);		
}
