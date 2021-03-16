struct Employee
{
	int id;
	char name[25];
	float salary;
}E[2];
#include <stdio.h>
void display(struct Employee *);
int main (void)
{
	int i;
	for(i=1;i<=2;i++)
	{ 
		printf("Enter ID no. of Employee : ");
		scanf("%d", &E[i].id);
		printf("\nEnter Name of the Employee : ");
		getchar();
		scanf("%[^\n]", E[i].name);
		printf("\nEnter Salary of the Employee : ");
		scanf("%f", &E[i].salary);
		
	}
	display(E);
}
void display(struct Employee *E)
{
	int i;
	for (i=1;i<=2;i++)
	{
		printf("\n\nID No. -> %d", E[i].id);
		printf("\nName -> %s", E[i].name);
		printf("\nSalary -> %.2f", E[i].salary);
	}
}
