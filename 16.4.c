//WAP to diplay the sum of first N natural numbers
#include <stdio.h>
#include <conio.h>
int addNumbers(int n);
void main()
{
    int num;
    printf("Enter the value of N : ");
    scanf("%d", &num);
    printf("Sum = %d",addNumbers(num));
    getch();
}
int addNumbers(int n)
{
    if(n != 0)
        return n + addNumbers(n-1);
    else
        return n;
}
