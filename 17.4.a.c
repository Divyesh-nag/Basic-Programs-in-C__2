//reverse a string by using lib function
#include <stdio.h>
#include <string.h>
#include <conio.h> 
void main()
{
   char arr[100];
 
   printf("Enter a string to reverse\n");
   gets(arr);
 
   strrev(arr);
 
   printf("Reverse of the string is \n%s\n", arr);
 
   getch();
}
