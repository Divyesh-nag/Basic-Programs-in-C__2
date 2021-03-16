#include <stdio.h> 
  
int hcf(int a, int b) 
{ 
    while (a != b) { 
        if (a > b)         
            a = a - b;         
        else        
            b = b - a;         
    } 
    return a; 
} 
int main() 
{ 
    int a,b;
	printf("Enter the value of a and b:\n");
	scanf("%d\n%d", &a, &b); 
    printf("\nThe hcf of the numbers is: %d\n", hcf(a, b));  
    return 0; 
} 
