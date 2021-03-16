//reverse a string without lib func
#include<stdio.h>
#include <conio.h> 
void main() 
{
   char str[100], temp;
   int i, j = 0, k;
 
   printf("Enter the string :");
   gets(str);
   for(k = 0; str[k] != '\0'; k++)
   i = 0;
   j = k - 1;
 
   while (i < j) {
      temp = str[i];
      str[i] = str[j];
      str[j] = temp;
      i++;
      j--;
   }
 
   printf("\nReverse string is :%s", str);
   getch();
}
