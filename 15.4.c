#include <stdio.h>

// Function to for n Fibonacci series
int fib(int n)
{
	int next,first=0,second=1;
	printf("the fibbonacci series is as follows");
	printf("%d\t%d",first,second);
		for(int i=0;i<=n;i++)
		{
		next=first+second;
		first=second;
		second=next;
		printf("%d\t",next);
		}
return 0;
}

// main function
int main()
{
	int n;
	printf("Enter the nth term: ");
	scanf("%d", &n);

	printf("n'th Fibonacci number is %d", fib(n));

	return 0;
}
