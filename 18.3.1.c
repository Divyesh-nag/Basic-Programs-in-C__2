#include <stdio.h>
void swapint(int *, int *);

void main()
{
	int a,b;
	printf("Enter two numbers : \n");
	scanf("%d\n%d", &a, &b);
	printf("The Current value of a = %d and b = %d\n", a,b);
	swapint(&a,&b);

}
void swapint(int *x,int *y)
{
	int temp=0;
	temp=*x;*x=*y;*y=temp;
	printf("The New value of a = %d and b = %d\n", *x,*y);

}
