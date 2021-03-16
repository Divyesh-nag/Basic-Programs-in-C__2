// WAP to display Fibonacci Series upto n numbers
#include<stdio.h>
#include <conio.h> 
int Fibo(int);
 
int main()
{
   int n, i = 0, c;
   printf("Enter a number : ");
   scanf("%d",&n);
 
   printf("Fibonacci series :-\n");
 
   for ( c = 1 ; c <= n ; c++ )
   {
      printf("%d\n", Fibo(i));
      i++; 
   }
 
   getch();
}
 
int Fibo(int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( Fibo(n-1) + Fibo(n-2) );
} 
