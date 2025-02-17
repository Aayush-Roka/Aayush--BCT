#include <stdio.h>
void fibonacci(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci series up to %d: %d %d", n, first, second);

    for (int i = 3; i <= n; i++) {
        next = first + second;
        printf(" %d", next);
        first = second;
        second = next;
    }
    printf("\n");
}

int main() {
    int n;
    
    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &n);

    if (n >= 2) {
        fibonacci(n);
    } else if (n == 1) {
        printf("Fibonacci series up to %d: 0\n", n);
    } else {
        printf("Please enter a number greater than or equal to 1.\n");
    }

    return 0;
}
