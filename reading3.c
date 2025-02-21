// Testing * in scanf
#include<stdio.h>
#include<conio.h>
int main ()
{
	int a,b,c;
	printf("Enter any three numbers ");
	scanf("%*d %d %d",&a,&b,&c); /* The first entered from the keyboard is neglected and
	second value is assigned to first variable */
	printf(" a=%d \n b=%d \n c=%d",a,b,c);
	getch();
	return 0;
}
