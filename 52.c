#include <stdio.h>
#include <string.h>

#define SIZE 5

int main() {
    char *words[SIZE] = {"apple", "orange", "banana", "grape", "cherry"};
    char *temp;

    printf("Original order:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%s\n", words[i]);
    }
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = i + 1; j < SIZE; j++) {
            if (strcmp(*words[i], *words[j]) > 0) {
                *temp = *words[i];
                *words[i] = *words[j];
                *words[j] = *temp;
            }
        }
    }
    printf("\nSorted order:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%s\n", words[i]);
    }
    return 0;
}
