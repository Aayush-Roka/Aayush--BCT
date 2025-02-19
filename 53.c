#include <stdio.h>
typedef struct {
    float real;
    float imag;
} complex;
complex addComplex(complex a, complex b) {
    complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}
complex subtractComplex(complex a, complex b) {
    complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}
void displayComplex(complex c) {
    if (c.imag >= 0)
        printf("%.2f + %.2fi\n", c.real, c.imag);
    else
        printf("%.2f - %.2fi\n", c.real, -c.imag);
}

int main() {
    complex num1, num2, sum, difference;
    printf("Enter the real and imaginary parts of the first complex number:\n");
    scanf("%f %f", &num1.real, &num1.imag);
    printf("Enter the real and imaginary parts of the second complex number:\n");
    scanf("%f %f", &num2.real, &num2.imag);
    sum = addComplex(num1, num2);
    difference = subtractComplex(num1, num2);
    printf("Sum of the two complex numbers: ");
    displayComplex(sum);
    printf("Difference of the two complex numbers: ");
    displayComplex(difference);

    return 0;
}
