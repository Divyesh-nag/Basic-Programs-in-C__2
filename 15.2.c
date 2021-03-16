/*WAP to find the factorial of a number n by using a suitable
 user defined function (say fact) for it*/
 #include <stdio.h>
 #include <conio.h>
 int fact (int);
 void main()
 {
 	int f,n;
 	printf("Enter a number: ");
 	scanf("%d", &n);
 	f=fact(n);
 	printf("The factorial of %d is: %d", n,f);
 	getch();

 }
 int fact(int m)
{
    
    int i, factorial=1;
    
	for(i=1; i<=m; i++)
        {
            factorial = factorial*i;             
        }
        
    return (factorial);
}
