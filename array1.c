#include<stdio.h>
#include<conio.h>
int main()
{
	int num[10],i;
	printf("Enter any ten numbers\n ");
	for (i=0;i<10;i++)
	scanf("%d",&num[i]);
	printf("You have entered 10 numbers\n");
	for (i=0;i<10;i++)
	printf("num[%d]=%d\t",i,num[i]);
	getch();
	return 0;
}
