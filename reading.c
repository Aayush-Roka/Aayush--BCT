#include<stdio.h>
#include<conio.h>
int main()
// Testing the usage of whitespace character in scanf() function 
{
	int n1;
	char ch;
	printf("Enter a number ");
	scanf("%d",&n1);
	printf("Enter a character : ");
	scanf(" %c", &ch);
	printf("\nNumber is %d \nCharacter is %c",n1,ch);
	/* When there was no space bfore %c i couldnt input any character due to buffer.
	 It can also be fixed by using fflush(stdio) */
	getch();
	return 0;
	
}
