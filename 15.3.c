#include<stdio.h>
#include<conio.h>
int fact (int);
 void main()
 {
 	int s,m;
 	printf("Enter a number: ");
 	scanf("%d", &m);
 	s=sumdigits(m);
 	printf("Sum of all digits of the number = %d", s);
 	getch();

 }
int sumdigits(int n)
{
    int rem=0, sum=0;
    
    while (n>0)
    {
        rem = n%10;
        sum = sum+rem;
        n = n/10;
    }
    
    return (sum);
}
