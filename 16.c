#include <stdio.h>
int main() {
    int intVar;
    float floatVar;
    double doubleVar;
    char charVar;
    printf("Size of int: %d bytes\n", sizeof(intVar));
    printf("Size of float: %d bytes\n", sizeof(floatVar));
    printf("Size of double: %d bytes\n", sizeof(doubleVar));
    printf("Size of char: %d bytes\n", sizeof(charVar));
    return 0;
}
