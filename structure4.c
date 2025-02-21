//Passing structure members to a function
#include<stdio.h>
void display(char empname[],int id,float sal)
{
printf("\nName\t\tId\t\tSalary\n");
printf("------------------------------------------------\n");
printf("%s\t\t%d\t\t%.2f",empname,id,sal);
}
void main(){
    struct employee{
        char name[20];
        int id;
        float salary;
    };
    struct employee emp;
    printf("Enter the name of employee: ");
    scanf("%s",emp.name);
    printf("Enter the id of employee: ");
    scanf("%d",&emp.id);
    printf("Enter the salary of employee: ");
    scanf("%f",&emp.salary);
    printf("\n the entered information od the employee is \n");
    display(emp.name,emp.id,emp.salary);
    
}
