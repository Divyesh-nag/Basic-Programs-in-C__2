#include <stdio.h>
#include <string.h>
int vowels(int *p)
{
	int vowels=0;
	for(; *p!='\0'; p++)
    {
        if(*p=='a' || *p=='e' || *p=='i' || *p=='o' || *p=='u' || *p=='A' ||
           *p=='E' || *p=='I' || *p=='O' || *p=='U')
        {
            ++vowels;
        }
    }
        return (vowels);
}

int main()
{
    char line[150];
    //int i, vowels, consonants, digits, tabs, newlines;
    //vowels =  consonants = digits = tabs = newlines = 0;
    printf("Enter a line of string: ");
    gets(line);
    int *p=line;
    int v=vowels(line);
    printf("Vowels: %d",v);
    /*for(i=0; line[i]!='\0'; ++i)
    {
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' ||
           line[i]=='o' || line[i]=='u' || line[i]=='A' ||
           line[i]=='E' || line[i]=='I' || line[i]=='O' ||
           line[i]=='U')
        {
            ++vowels;
        }
        else if((line[i]>='a'&& line[i]<='z') || (line[i]>='A'&& line[i]<='Z'))
        {
            ++consonants;
        }
        else if(line[i]>='0' && line[i]<='9')
        {
            ++digits;
        }
        else if (line[i]=='\t')
        {
            ++tabs;
        }
        else if (line[i]=='\n')
        {
            ++newlines;
        }
    }
    printf("Vowels: %d",vowels);
    printf("\nConsonants: %d",consonants);
    printf("\nDigits: %d",digits);
    printf("\nTabs: %d", tabs);
    printf("\nNew Lines: %d",newlines);
    printf("\nAplhabets : %d", vowels+consonants);
    printf("\nCharacters: %d",vowels + consonants + digits + tabs + newlines);*/
	return 0;

}
