#include <stdio.h>
int main() {
	int s=0,c=0,j;
	for(j = 100; j < 200; j++)  
	{
		if(j%7==0)
		{
			s=s+j;
			c++;
			
		}
	}
	printf("\n %d", s);
	printf("\n %d", c);
	return 0;
}
