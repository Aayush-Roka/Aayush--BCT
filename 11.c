#include <stdio.h>
int main() {
    int a, b, product = 0;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    for(int i = 0; i < b; i++) {
        product += a;
    }
    printf("Product of %d and %d is %d\n", a, b, product);
    return 0;
}
