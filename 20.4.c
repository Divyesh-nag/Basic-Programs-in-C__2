#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int n;
	char *text;
	printf("Enter the length of the text: ");
	scanf("%d", &n);
	text=(char*)malloc(n*sizeof(char));
	printf("Enter text: ");
	getchar();
	scanf("%[^\n]", text);
	printf("The Entered text is: %s\n", text);
	int v,c;
	while (*text)
{
	if (*text=='a'||*text=='e'||*text=='i'||*text=='o'||*text=='u'||*text=='A'||*text=='E'||*text=='O'||*text=='U'||*text=='I')
	v++;
	else if (*text>='a'&&*text<='z'||*text>='A'&&*text<='Z')
	c++;
	text++;
}
printf("The number of consonants are: %d\n", c);
printf("The number of vowels are: %d\n",v);
	free(text);
	
}
