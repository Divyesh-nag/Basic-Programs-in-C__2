#include <stdio.h>
struct time
{
	int hr;
	int min;
	int sec;	
}t;
int main (void)
{
	printf("Enter hours count: ");
	scanf("%d", &t.hr);
	printf("Enter min count: ");
	scanf("%d", &t.min);
	
	if (t.min>60)
	{
		printf("The min input should be equal or less than 60.\n");
		t.min=0;
		printf("Enter min again: ");
		scanf("%d", &t.min);
	}

	printf("Enter sec count: ");
	scanf("%d", &t.sec);
		if (t.sec>60)
	{
		printf("The sec input should be equal or less than 60.\n");
		t.sec=0;
		printf("Enter sec again: ");
		scanf("%d", &t.sec);
	}
	
	printf("The time is %d:%d:%d ", t.hr,t.min,t.sec);
}
