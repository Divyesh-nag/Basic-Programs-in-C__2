#include <stdio.h>
void swapfloat(float *, float *);

void main()
{
	float a,b;
	printf("Enter two numbers : \n");
	scanf("%f\n%f", &a, &b);
	printf("The Current value of a = %.2f and b = %.2f\n", a,b);
	swapfloat(&a,&b);

}
void swapfloat(float *x,float *y)
{
	float temp=0;
	temp=*x;*x=*y;*y=temp;
	printf("The New value of a = %.2f and b = %.2f\n", *x,*y);

}
