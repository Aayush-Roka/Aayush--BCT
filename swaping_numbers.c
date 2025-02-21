// Swapping two  numbers

#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);	
    //Numbers before swapping
    printf("Before swapping... a: %d, b: %d\n",a,b);
    //swapping number
    a = a+b;
    b = a-b;
    a = a-b; 
    //Numbers after swapping 
    printf("After swapping...  a: %d, b: %d\n",a,b);
    return 0;
}

