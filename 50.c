// concatenate 2 string using strcat function
#include <stdio.h>
#include <string.h>
int main() {
    char str1[1000], str2[1000];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
    return 0;
}
