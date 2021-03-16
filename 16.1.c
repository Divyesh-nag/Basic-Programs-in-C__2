// WAP to display the reverse of a number using recursive function
#include <stdio.h>
#include <conio.h>
void main(){
   int n,r;

   
   printf("Enter any number: ");
   scanf("%d",&n);

   
   r=rev(n);
   printf("\nAfter reverse the no is :%d",r);
   getch();
}
	int sum=0,rem;
int rev(int x){

   if(x){
      rem=x%10;
      sum=sum*10+rem;
     rev(x/10);
   }
   else
      return (sum);
   return (sum);
}
