#include<stdio.h>
#define pi 3.14
int main()
{
	float radius, height, tsa;
	printf("Enter radius and height of cylinder: ");
	scanf("%f%f",&radius,&height);
	tsa=2*pi*radius*(radius+height);
	printf("\nTotal surface area of cylinder is %.2f", tsa);
	
	return 0;
}
