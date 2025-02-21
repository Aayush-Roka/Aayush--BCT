#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i=1;
	long fact=1;
	printf("Enter a number");
	scanf("%d",&n);
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("Factorial=%ld",fact);
	getch();
	return 0;
}
