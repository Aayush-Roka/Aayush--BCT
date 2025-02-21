//	C program to calculate the area and perimeter 	of rectangle 

#include <stdio.h>
int main()
{
    float length;
    float breadth;
    float area;
    float perimeter;
    printf("Enter the length: ");
    scanf("%f", &length);
    printf("Enter the breadth: ");
    scanf("%f", &breadth);
    area = length * breadth;
    perimeter = (2 * length) + (2 * breadth);
    printf("Area of the rectangle: %.02f\n", area);
    printf("Perimeter of rectangle: %.02f\n", perimeter);
    return 0;
}

