// Feet into inches

#include<stdio.h>
int main()
{
    int feet,inches;
    printf("Enter the value of feet: ");
    scanf("%d",&feet);
    inches=feet*12;	 // 1 feet=12 inches
    printf("Total inches will be: %d\n",inches);
    return 0;
}

