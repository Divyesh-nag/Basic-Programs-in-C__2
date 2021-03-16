#include <stdio.h>
#include <conio.h>
int power( int , int );
void main ()
{
	int x,y,p;
	printf("Enter the value of 'x' and 'y' :\n");
	scanf("%d\n%d", &x, &y);
	p=power(x,y);
	printf("The value of (%d)^%d is : %d\n", x,y,p);
	getch();
	
}

int power(int a, int b)
{
	int i,pw=1;
	for (i=0;i<b;i++)
	{
		pw=pw*a;	
	}
	
	return (pw);
}
