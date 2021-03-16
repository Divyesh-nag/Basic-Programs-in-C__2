#include <stdio.h>
int main() {
	float numbers[5];
	int j, p=0, n=0;
	printf("\nInput the first number: "); 
    scanf("%f", &numbers[0]);
    printf("\nInput the second number: "); 
    scanf("%f", &numbers[1]);
    printf("\nInput the third number: "); 
    scanf("%f", &numbers[2]);
	printf("\nInput the fourth number: "); 
    scanf("%f", &numbers[3]);
    printf("\nInput the fifth number: "); 
    scanf("%f", &numbers[4]);
	for(j = 0; j < 5; j++) {
		if(numbers[j] > 0)
		{
			
			p++;
		}
		else if(numbers[j] < 0)
		{
			n++;
		}
	}
	printf("\nNumber of positive numbers: %d", p);
	printf("\nNumber of negative numbers: %d", n);
	printf("\n");
	return 0;
}
