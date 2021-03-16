#include <stdio.h>
#include <string.h>
 
void main()
{
  	char str[100], ch, newch;
  	int i;
 
  	printf("Enter a String :  ");
  	gets(str);
  	
  	printf("Enter the Character to Search for :  ");
  	scanf("%c", &ch);
  	
	getchar();
  	
  	printf("Enter the New Character :  ");
  	scanf("%c", &newch);
  	
  	for(i = 0; i <= strlen(str); i++)
  	{
  		if(str[i] == ch)  
		{
  			str[i] = newch;
 		}
	}
	
	printf("The String after Replacing All Occurrences of '%c' with '%c' = %s ", ch, newch, str);
	
  	
}
