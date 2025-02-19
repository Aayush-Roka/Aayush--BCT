#include <stdio.h>

// Function to reverse a string using recursion
void reverseString(char *str, int start, int end) {
    if (start >= end)
        return;
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    reverseString(str, start + 1, end - 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);  
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    reverseString(str, 0, length - 1);
    printf("Reversed string: %s\n", str);
    return 0;
}
