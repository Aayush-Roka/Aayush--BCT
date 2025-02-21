#include<stdio.h>
int main ()
{
	float a,b,c,avg;
	printf("Enter any three numbers\n");
	scanf("%f %f %f",&a,&b,&c);
	avg=(a+b+c)/3;
	printf("The average of three entered numbers is %f",avg);
	return 0;
	getch ();
}

