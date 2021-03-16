#include <stdio.h>
int main() 
{
 int i,s=0,n;
 for(i=0;i<=100;i++)
 {
 
 if(i%6==0 && i%4!=0)
 {
s=s+i;
printf("\t %d",i);
n++;
}
}
printf("\n sum is %d and total number is %d ",s,n);
return 0;
}