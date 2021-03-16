#include <stdio.h>
void swapchar(char *, char *);

void main()
{
	char First,Second;
	printf("Enter two single chracter constants : \n");
	scanf("%c\n%c", &First, &Second);
	printf("The Current Characters are First = %c and Second = %c\n", First,Second);
	swapchar(&First,&Second);

}
void swapchar(char *x,char *y)
{
	char temp=0;
	temp=*x;*x=*y;*y=temp;
	printf("The New Characters are First = %c and Second = %c\n", *x,*y);

}
