#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int a=0,b=0,c=0,d=0,e=0,n;
	printf("Enter the size: \n");
	scanf("%d",&n);
	int *p;
	p=(int*)calloc(n,sizeof(int));
	printf("Enter a number: \n");
	int i;
	for (i=0;i<n;i++)
	{
		scanf("%d", &p[i]);
	}

	for (i=0;i<n;i++)
	{
		if (p[i]==0)
		a++;
		else if (p[i]==1)
		b++;
		else if (p[i]==2)
		c++;
		else if (p[i]==3)
		d++;
		else if (p[i]==4)
		e++;
		
	}
	printf(" Number\t\tFrequency\n");
	printf("   0\t\t   %d\n",a);
	printf("   1\t\t   %d\n",b);
	printf("   2\t\t   %d\n",c);
	printf("   3\t\t   %d\n",d);
	printf("   4\t\t   %d\n",e);
}
