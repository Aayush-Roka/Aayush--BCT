#include<stdio.h>
#include<conio.h>
int main()
{
	int divisor,dividend,quotient,remainder;
	printf("Enter divisor and dividend");
	scanf("%d %d",&divisor,&dividend);
	remainder=dividend%divisor;
	quotient=dividend/divisor;
	printf("Remainder=%d and quotient=%d",remainder,quotient);
	getch();
	return 0;
}
