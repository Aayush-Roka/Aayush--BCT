/*WAP to create a structure named date that has day, month and year as its members.Include this structure
as a memberin another structure named employees which has name,id and salary as other members.use this structure 
to read and display employee's name,id,date of birth and salary.*/
#include<stdio.h>
struct date{
    int day;
    int month;
    int year;
};
struct Employee{
    char name[20];
    int id;
    struct date dateofbirth;
    float salary;
}emp;
int main(){
  printf("Enter the name of employee: ");
  scanf("%s",emp.name);
  printf("Enter the id of employee: ");
  scanf("%d",&emp.id);
  printf("Enter day of birthday: ");
  scanf("%d",&emp.dateofbirth.day);
  printf("Enter month of birthday: ");
  scanf("%d",&emp.dateofbirth.month);
  printf("Enter year of birthday: ");
  scanf("%d",&emp.dateofbirth.year);
  printf("Enter the dalary of employee: ");
  scanf("%f",&emp.salary);
  printf("The details of employee are:\n");
  printf("Name\t\tid\tday\tmonth\tyear\tsalary\n");
  printf("---------------------------------------------------------\n");
  printf("%s\t\t%d\t%d\t%d\t%d\t%.2f",emp.name,emp.id,emp.dateofbirth.day,emp.dateofbirth.month,emp.dateofbirth.year,emp.salary);
  return 0;

}
