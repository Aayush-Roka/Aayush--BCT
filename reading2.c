// To input DOB in standard format
#include<stdio.h>
#include<conio.h>
int main ()
{
	int day,month,year;
	printf("Enter your date of birth in sequence day, month and year separated by /: ");
	scanf("%d/%d/%d", &day, &month, &year); // "/" is being used 
	printf("Your date of birth is %d %d %d", day, month ,year);
	// While entering data do it using / like 02/03/2007
	getch();
	return 0;
}
