#include <stdio.h>
int fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fact(n - 1);
}
int combination(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}
int permutation(int n, int r) {
    return fact(n) / fact(n - r);
}

int main() {
    int n, r;
    
    printf("Enter value of n: ");
    scanf("%d", &n);
    
    printf("Enter value of r: ");
    scanf("%d", &r);

    printf("nCr (Combination): %d\n", combination(n, r));
    printf("nPr (Permutation): %d\n", permutation(n, r));
    
    return 0;
}
