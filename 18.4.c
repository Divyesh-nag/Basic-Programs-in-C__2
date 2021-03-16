#include<stdio.h>
int sum_array_elements(int *p,int n)
{
    
  int s=0;
  int i;
  for( i=0;i<n;i++)
  {
      s=s+*p;
      p++;
  }
  return s;
  
}
int main()
{
   int array[5],i;
   printf ("Enter the array elements :\n");
   for (i=0;i<5;i++)
   scanf("%d", &array[i]);
   int sum;
   int *p=array;
   sum = sum_array_elements(p,5);
   printf("\nSum of array elements is:%d",sum);
   return 0;
}
