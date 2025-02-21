#include <stdio.h>

int main() {
    int a[100], temp, i, j, n;
    printf("How many numbers?\n");
    scanf("%d", &n);
    printf("Enter the numbers:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++) { // Outer loop runs n-1 times
        for (j = i + 1; j < n; j++) { // Compare with subsequent elements
            if (a[i] > a[j]) { // Swap if elements are out of order
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }  
    printf("The ascending order is:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
}
    return 0;
}

