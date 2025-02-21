#include<stdio.h>
struct employee{
    char name[20];
    int id;
    float salary;
};
void display(struct employee e)
{
printf("\nName\t\tId\t\tSalary\n");
printf("------------------------------------------------\n");
printf("%s\t\t%d\t\t%.2f",e.name,e.id,e.salary);
}
void increaseSalary(struct employee *ee)
{
    ee->salary=ee->salary+1000;
}
int main()
{
    struct employee emp;
    printf("Enter the name of employee: ");
    scanf("%s",emp.name);
    printf("Enter the id of employee: ");
    scanf("%d",&emp.id);
    printf("Enter the salary of employee: ");
    scanf("%f",&emp.salary);
    increaseSalary(&emp);
    display(emp);
    return 0;
}
