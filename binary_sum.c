// add two binary numbers

#include<stdio.h>
#include<conio.h>
int main()
{
	long int bin1, bin2;
	int i=0, rem=0, sum[20];
	printf("Enter first and second binary numbers:\t");
	scanf("%ld%ld", &bin1, &bin2);
	
	while(bin1!=0||bin2!=0)
	{
		sum[i++]=(bin1%10+bin2%10+rem)%2;
		rem=(bin1%10+bin2%10+rem)/2;
		bin1=bin1/10;
		bin2=bin2/10;
	}
	if(rem!=0)
	{
		sum[i++]=rem;
	}
	--i;
	printf("The sum of two binary numbers: ");
	while(i>=0)
	{
		printf("%d", sum[i--]);
	}
	getch();
	return 0;
}
