#include <stdio.h>
#include <string.h> 
void main()
{
   char str[100], sub[100];
   int position, length, c = 0;
 
   printf("Enter a string : ");
   gets(str);
 
   printf("Enter the position and length of substring\n");
   scanf("%d%d", &position, &length);
 
   while (c < length) 
   {
      sub[c] = str[position+c];
      c++;
   }
   sub[c] = '\0';
 
   printf("The substring is : %s\n", sub);
 
}
