#include <string.h>
#include <stdio.h> 
int main()
{
    char s[1000],c1,c2;  
    int  i;
 
    printf("Enter the string : ");
    gets(s);
    
	printf("Enter a character replace: ");
    scanf("%c",&c1);
    getchar();

    char temp;
    for(i=0;s[i];i++)
	{  
		if(s[i]==c1)
		{
			
		   temp=s[i];
		   s[i]=s[i-3];
		   s[i-3]=temp;
		   
	 
	    }
 
	}
	   
    printf("\nThe New String is : %s",s);
 	 
     
    return 0;
}
