#include <stdio.h>
#include <stdlib.h>
int main (void)
{
int i, num;
int *data;
printf("Enter total numbers: ");
scanf("%d", &num);
data = (int*)calloc(num, sizeof(int));

for (i=1;i<=num;i++)
{
	printf("Enter number %d:\n", i);
	scanf("%d",data+i);
}
printf("\nThe numbers are:\n");
 for(i = 1; i <= num; i++)
    {
        printf("%d\n", *(data+i));
    }
    
  free(data);  
}
