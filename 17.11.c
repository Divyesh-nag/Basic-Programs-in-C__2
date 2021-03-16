#include <stdio.h>
#include <string.h>

int main(){
    char str[20];
    int i, length;
    int count = 0;
    
    printf("Enter a string : ");
    gets(str);
    for (length=0;str[length]!='\0';length++);
    for(i=0;i < length ;i++)
	{
        if(str[i] != str[length-i-1])
		{
            count = 1;
            break;
        }
    }
    
    if (count) 
	{
        printf("%s is not a palindrome", str);
    }    
    else 
	{
        printf("%s is a palindrome", str);
    }
    return 0;
}
