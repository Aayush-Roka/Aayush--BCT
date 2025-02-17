//Sum of Arithemetic Series
#include <stdio.h>
int main() {
    int a = 1; 
    int d=2;
    int n = 10; 
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += a + i * d;
    }
    printf("Sum of the arithmetic series is: %d\n", sum);
    return 0;
}
