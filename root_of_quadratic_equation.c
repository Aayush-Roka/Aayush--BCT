#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c, imaginary, real, discriminant;
	float root1, root2;
	printf("Enter the values of a, b, c in equation ax^2+bx+c=0.\n");
	scanf("%f%f%f", &a, &b, &c);
	
	discriminant=pow(b,2)-4*a*c;
	
	if(discriminant>=0)
	{
		root1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
		root2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
	
		printf("\nroot1: %.2f", root1);
		printf("\nroot2: %.2f", root2);
	}
	
	else
	{
		real = -b/(2*a);
		imaginary = sqrt(discriminant)/(2*a);
	
		printf("\nroot1: %.2f%fi", real, imaginary);
		printf("\nroot2: %.2f%fi", real, imaginary);
	}
	
	
	return 0;
}
