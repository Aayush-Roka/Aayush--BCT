// Allowing only uppercase letters as input through stringg
#include<stdio.h>
#include<conio.h>
int main ()
{
	char string[15];
	printf("Enter your name in uppercase ");
	scanf("%[A-Z]",string); /* Only uppercase letters were allowed
	When I entered any smallcase letters it terminates the program and doesnt read any value after it detects 
	a smallcase letter*/ 
	printf("Your name is %s ",string);
	getch();
	return 0;
}
