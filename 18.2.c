#include <stdio.h>
void greatest(int *,int *,int *);
void  main ()
{
	int a,b,c;
	printf("Enter the value of a,b,c: \n");
	scanf("%d\n%d\n%d", &a,&b,&c);
	greatest(&a,&b,&c);
}
void greatest(int *x,int *y, int *z)
{
	if (*x>*y && *x>*z)
	printf("The greatest number is : %d\n", *x);
	else if (*y>*x && *y>*z)
	printf("The greatest number is : %d\n", *y);
	if (*z>*x && *z>*y)
	printf("The greatest number is : %d\n", *z);
}
