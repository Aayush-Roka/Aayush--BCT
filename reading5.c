// Reading a string such that it can take multiple words with space
#include<stdio.h>
#include<conio.h>
int main()
{
	char string[50];
	printf("Enter Your full name ");
	scanf("%[^\n]s",string); //It allowed me to entered my full name
	printf("Your full name is %s",string);
	return 0;
}
