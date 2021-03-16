#include <stdio.h>
struct dob
{
	int date;int month;int year;	
};
struct details
{
	char name[25];int age;char address[100];struct dob bday; 	
}info;
int main (void)
{

	printf("Enter Your name: ");
	scanf("%[^\n]", info.name);
	printf("Enter your age: ");
	scanf("%d", &info.age);
	printf("Enter your Address: ");
	getchar();
	scanf("%[^\n]", info.address);
	printf("Enter your DOB (dd/mm/yyyy): ");
	scanf("%d %d %d", &info.bday.date,&info.bday.month,&info.bday.year);
	printf("\n\nName: %s", info.name);
	printf("\nAge: %d", info.age);
	printf("\nAddress: %s", info.address);
	printf("\nDate of Birth: %d/%d/%d",info.bday.date,info.bday.month,info.bday.year);
}

