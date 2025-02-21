// C program to convert temperature from Fahrenheit to Celsius and vice versa
#include<stdio.h>
int main(){
    float f, c;
    int choice;
    printf("Enter 1 to convert Fahrenheit to Celsius\n");
    printf("Enter 2 to convert Celsius to Fahrenheit\n");
    scanf("%d", &choice);
    if(choice == 1){
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &f);
        c = (f - 32) * 1.8;
        printf("Temperature in Celsius is: %f\n", c);
    }
    else if(choice == 2){
        printf("Enter temperature in Celsius: ");
        scanf("%f", &c);
        f = (c * 1.8) + 32;
        printf("Temperature in Fahrenheit is: %f\n", f);
    }
    else{
        printf("Invalid choice\n");
    }
    return 0;
}
