#include<stdio.h>
int main(void)
{
	int a,b=1,count=1;
	printf("enter the number - ");
	scanf("%d",&a);
	if(a%2!=0)
	{
		printf("invalid factorial");
	}
	else
	{
	while(b<a)
	{
		b=b*count;
		count++;
	}
	printf("%d",count-1);
    }
    }