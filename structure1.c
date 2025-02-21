/*WAP to create a sturcture named student that has name,rollno,marks and remarks as its members.Use 
this structuire to read anad display record of 5 students.*/
#include<stdio.h>

struct student{
        char name[40];
        int roll;
        float marks;
        char remark;
        };
int main()
{
    struct student s[5];
    int i;
    float tempmarks;
    for(i=0;i<5;i++)
    {
     printf("Enter the name of student %d:\n",i+1);
     printf("Name:\t");
     scanf("%s",s[i].name);
     printf("Roll:\t");
     scanf ("%d",&s[i].roll);
     printf("Marks:\t"); 
     scanf("%f",&s[i].marks);
     printf("Remarks(P/F)\t:");
     scanf("%s",&s[i].remark);
    }
    printf("\n The Details Of Students Are: \n");   
    printf("Student Name\t Roll No\t Marks\t Remarks\n");
    printf("--------------------------------------------------\n");
    for(i=0;i<5;i++)
    {
        printf("%s\t\t %d\t\t %.2f\t\t%c\n",s[i].name,s[i].roll,s[i].marks,s[i].remark);

    }
    return 0;

    }

