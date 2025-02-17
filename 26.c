// Calculate the sum of digits of a number
#include <stdio.h>

int main() {
    int num =12345;
    int sum = 0,r;
    while (num > 0) {
    	r=num%10;
        sum += r;
        num /= 10;
    }
    printf("Sum of digits: %d\n", sum);
    return 0;
}
