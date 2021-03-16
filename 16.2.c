// WAP to display the sum of each digit of a number
#include <stdio.h> 
#include <conio.h>

void main() 
{ 
    int num;
	printf("Enter any number: ");
	scanf("%d", &num); 
    int result = sum(num); 
    printf("Sum of digits in %d is %d\n", num, result); 
    getch(); 
}

int sum(int n) 
{ 
    if (n == 0) 
       return 0; 
    else
    	return (n % 10 + sum(n / 10)); 
}  
