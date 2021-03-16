//WAP to diplay the sum of two numbers
#include <stdio.h>
#include<conio.h>
void main ()
{
    int a, b, r;
    printf("Enter the two numbers:\n");
    scanf("%d%d", &a, &b);
    r = add(a, b);     
    printf("Sum of two numbers is: %d\n", r);
    getch();
}

int y;

int add(int m, int n)
{
    if(n == 0)
        return m;
	else if (m == 0)
		return n;
    y = add(m, n-1)+1;
    return y; 
}

