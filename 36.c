// Sum of Square of N natural number
#include <stdio.h>
int main() {
    int n;
    printf("Enter no of terms:\n");
    scanf("%d",&n);
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }
    printf("Sum of squares of the first %d natural numbers is: %d\n", n, sum);
    return 0;
}
