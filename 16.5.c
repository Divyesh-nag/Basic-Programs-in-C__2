// WAP to display factorial of a number using recursion
#include <stdio.h>
#include <conio.h>
void main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d", &n);
	if (n<0)
	printf("Sorry! Invalid Number.");
	else
	printf("%d! = %d\n", n,fact(n));
	getch();
}

int fact(int x)
{
	if (x==0)
	return 1;
	else 
	return (x*fact(x-1));
}
