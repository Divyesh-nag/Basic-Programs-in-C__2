#include <stdio.h>
float area(float *);
int main (void)
{
	float r;
	printf("Enter the radius of the cirle: ");
	scanf("%f", &r);
	
	float a;
	a= area(&r);
	
	printf("The area of the circle is : %f \n",a);
	printf("The circumference of the circle is : %f\n", (2*(a))/r);
}
float area (float *x)
{
	float pi=3.141;
	float ar=pi * (*x) * (*x);
	
	return (ar);
}
