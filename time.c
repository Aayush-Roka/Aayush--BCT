#include<stdio.h>
#include<conio.h>
int main()
{
	int hours,minutes,seconds;
	printf("Enter the time in 'HH:MM:SS'format");
	scanf("%d %d %d",&hours,&minutes,&seconds);
	printf("\nThe time is %d:%d:%d",hours,minutes,seconds);
	getch();
	return 0;
}
