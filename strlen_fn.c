#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int l;
	printf("Enter a string: ");
	gets(str);
	l=strlen(str);
	printf("The length of entered string is %d",l);
	return 0;
}
