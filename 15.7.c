#include <stdio.h>
#include <conio.h>
float fact(float,float);
void main ()
{
	float n,r;
	float f;
	printf("Enter the value of n and r:\n");
	scanf("%f\n%f", &n, &r);
	
	f=fact(n,r);
	printf("The value of nCr is : %f", f);
	getch();
	
}

float fact(float m, float q)
{
	float fact1=1,fact2=1,fact3=1,i;
	float nCr;
	
	for (i=0;i<m;i++)
	{
		fact1=fact1*(i+1);
	}
	for (i=0;i<(m-q);i++)
	{
		fact2=fact2*(i+1);
	}
	for (i=0;i<q;i++)
	{
		fact3=fact3*(i+1);
	}
	
	nCr=(fact1)/((fact2)*(fact3));
	
	return (nCr);
}
