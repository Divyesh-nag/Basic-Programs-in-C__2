#include <stdio.h>
int sum (int *,int *,int *);
void main ()
{
	int a,b,c,s;
	printf("Enter number 1 : ");
	scanf("%d", &a);
	printf("Enter number 2 : ");
	scanf("%d", &b);
	printf("Enter number 3 : ");
	scanf("%d", &c);
	s=sum(&a,&b,&c);
	printf("The sum of the numbers is : %d\n", s);
	printf("The average of the numbers is : %d\n",s/3);
}
int sum(int *n1,int *n2,int *n3)
{
	int sum = *n1+*n2+*n3;
	return (sum); 
}
