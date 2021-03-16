struct student 
{
	int roll;
	char name[25];
	float marks;
};
#include <stdio.h>
void display(struct student *s,int n);
int main (void)
{
	int n;
	printf("Enter the no. of students : ");
	scanf("%d", &n);
	int i;
	struct student s[10];
	for (i=1;i<=n;i++)
	{
		printf("Enter the roll no: ");
		scanf("%d", &s[i].roll);
		printf("Enter the name: ");
		getchar();
		scanf("%[^\n]", s[i].name);
		printf("Enter the mark of the student: ");
		scanf("%f", &s[i].marks);
	}
	display(s,n);
}

void display(struct student *s,int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		printf("\nRoll No: %d", s[i].roll);
		printf("\nName: %s", s[i].name);
		printf("\nMarks: %.2f",s[i].marks);
	}
	float max=-1;int count;
	for(i=1;i<=n;i++)
	{
		if (max<s[i].marks)
		{
			max=s[i].marks;count=i;
		}	
	}
	printf("\n%s (%d) has got the highest marks, which is: %.2f", s[count].name,s[count].roll,max); 
}



