struct student
{
	int roll;
	char name[25];
	float marks;
}S1;
#include <stdio.h>
void display(struct student S1);
int main (void)
{
	printf("Enter roll no. of student : ");
	scanf("%d", &S1.roll);
	printf("\nEnter Name of the student : ");
	getchar();
	scanf("%[^\n]", S1.name);
	printf("\nEnter marks of the student : ");
	scanf("%f", &S1.marks);
	display(S1);
}
void display(struct student S1)
{
	printf("\nRoll No. -> %d", S1.roll);
	printf("\nName -> %s", S1.name);
	printf("\nMarks -> %.2f", S1.marks);
}
