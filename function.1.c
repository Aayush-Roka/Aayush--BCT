#include<stdio.h>
#include<conio.h>

// Function to find the greater of two numbers
int greater(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}
int main() {
    int a, b, c, d, e;
    printf("Enter any three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);
    d = greater(a, b);
    e = greater(d, c);
    printf("The greatest number is %d", e);
    getch();
    return 0;
}

