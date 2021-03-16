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
	printf("The Entered text is: %s", text);
	free(text);
	
}
