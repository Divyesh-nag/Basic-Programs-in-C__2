#include <stdio.h>
#include <stdlib.h>
void swap(int ,int );
int main (void)
{
	int *p,*q;
	p=(int*)malloc(4);
	q=(int*)malloc(4);
	printf("Enter the 1st number: ");
	scanf("%d", p);
	printf("Enter the 2nd number: ");
	scanf("%d", q);
	swap(*p,*q);
	
	free(p);free(q);
}
void swap(int a,int b)
{
	int t;
	t=a;a=b;b=t;
	printf("After swapping the numbers are:\n%d and %d\n", a,b);
}
