// Testing the string length function (strlen)
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[15];
	int x;
	printf("Enter any word whose length is to be known ");
	scanf("%s",a);
	x=strlen(a);
	printf("The string has %d length ",x);
	return 0;
}
