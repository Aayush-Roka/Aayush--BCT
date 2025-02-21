// Using two fns for sum and display

#include<stdio.h>
int processData(int x,int y)
{
return (x+y);
}
void  displayData(int sum)
{
printf("The sum of two  numbers is %d",sum);
}
int main()
{
	int a,b,c;
	printf("ENter any two numbers \n");
	scanf("%d%d",&a,&b);
    c= processData(  a,  b);
    displayData(c);
	return 0;
	
}
