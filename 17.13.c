/*#include <stdio.h>
int main()
{
   char str[1000], ch;
   int i, frequency = 0;
   printf("Enter a string: ");
   gets(str);
   printf("Enter a character to find the frequency: ");
   scanf("%c",&ch);
   for(i = 0; str[i] != '\0'; ++i)
   {
       if(ch == str[i])
           ++frequency;
   }
   printf("Frequency of %c = %d", ch, frequency);
   return 0;
}*/
#include <stdio.h>
#include <string.h>


int main()
{
    char str[100];
    int i, len;
    int freq[26];

    printf("Enter any string: ");
    gets(str);
	int j;
	for (j=0;str[j]!='\0';j++);
    len = j;

    
    for(i=0; i<26; i++)
    {
        freq[i] = 0;
    }

    for(i=0; i<len; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            freq[str[i] - 97]++;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            freq[str[i] - 65]++;
        }
    }

    printf("\nFrequency of all characters in the given string: \n");
    for(i=0; i<26; i++)
    {
        if(freq[i] != 0)
        {
            printf("'%c' = %d\n", (i + 97), freq[i]);
        }
    }

    return 0;
}
