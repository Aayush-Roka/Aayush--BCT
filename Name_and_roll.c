#include<stdio.h>
int main()
{
	char name[100];
	int roll;
	printf("Enter your name: ");
	scanf(" %[^\n]s", name);//gets(a) is also valid;
	printf(" \nEnter roll number: ");
	scanf("%d", &roll);
	printf("\nYour name is %s.", name);
	printf(" \nYour roll number is %d.", roll);
	return 0;
}
