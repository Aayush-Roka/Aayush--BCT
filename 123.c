#include<stdio.h>
struct employee
{
	int id;
	char name[20];
	float salary;
};
void display(struct employee emp)
{
	printf("\nId:\t\t\tName:\t\t\tSalary");
	printf("\n-----------------------------------------------------");
	printf("\n%d\t\t%s\t\t%f\t\t",&emp.id,emp.name,&emp.salary);
	printf("\n-----------------------------------------------------");
}
int main()
{
	struct employee emp;
	printf("Employee id:\n");
	scanf("%[^\n]d\n",&emp.id);
	printf("Employee Name:\n");
	scanf(" %[^\n]s",emp.name);
	printf("Employee Slary:\n");
	scanf(" %[^\n]f",&emp.salary);
	display(emp);
	return 0;
}