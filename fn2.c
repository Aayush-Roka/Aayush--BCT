// To find area of the circle using fn

#include<stdio.h>
#define pi 3.1415
float areaofcircle(float r);
int main()
{
	float r1,r2,a1,a2;
    printf("Enter the radius of two circles \n");
    scanf("%f%f",&r1,&r2);
    float areaofcircle(float r)
    {
    	return (pi*r*r);
	}
	a1=areaofcircle(r1);
	a2=areaofcircle(r2);
	printf("The area of first circle is %f\n",a1);
	printf("The area of second circle is %f\n",a2);
	return 0;
}

