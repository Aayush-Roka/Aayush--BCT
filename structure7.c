#include<stdio.h>
#include<string.h>
struct student
{
	char name[50];
	int  roll ;
	int marks;
	char remarks;
};
struct student s;
int main()
{
printf("Enter the name of student\n");
gets(s.name);
printf("Enter the rollno \n");
scanf("%d",&s.roll);
printf("ENter the marks\n");
scanf("%d",&s.marks);
printf("ENter the remarks for pass or fail");
s.remarks=getche();
printf("\n\n \tTHe information of student is\n");
printf("%s\t%d\t%d\t%c",s.name,s.roll,s.marks,s.remarks);
	return 0;
}
