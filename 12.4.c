#include <stdio.h>
int main() 
{
 int a,b,c;
 printf("Enter the sides of a triangle :- ");
 scanf("%d%d%d",&a,&b,&c);
 if(((a*a) + (b*b )==c*c) || (((c*c) + (b*b ))==a*a)|| (((c*c) + (a*a ))==b*b))
 {


printf("This triangle is a right angled triangle. ");
  }
else
{

printf("This triangle is not a right angled triangle. ");
}
return 0;
}
