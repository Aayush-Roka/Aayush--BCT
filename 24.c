#include<stdio.h>
int main()
{
	int hour,minute,second;
	printf("Enter hour minute and second in format HH:MM:SS\n");
	scanf("%d:%d:%d",&hour,&minute,&second);
	printf("time shown is %02d:%02d:%02d",hour,minute,second);
	return 0;
}