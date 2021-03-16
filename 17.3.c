//to compare two strings
#include <stdio.h>
#include <string.h>
#include <conio.h>
void main()
{
  	char Str1[100], Str2[100];
  	int i;
 
  	printf("Please Enter the First String :  ");
  	gets(Str1);
  	
  	printf("\nPlease Enter the Second String :  ");
  	gets(Str2);
  	
  	for(i = 0; Str1[i] == Str2[i] && Str1[i] == '\0'; i++);
		   
  	if(Str1[i] < Str2[i])
   	{
   		printf("\nstr1 is Less than str2");
	}
	else if(Str1[i] > Str2[i])
   	{
   		printf("\nstr2 is Less than str1");
	}
	else
   	{
   		printf("\nstr1 is Equal to str2");
	}
  	
  	getch();
}
