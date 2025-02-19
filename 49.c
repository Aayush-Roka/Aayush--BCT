//Reada sentence and delete whitespace and replacw"." by ":"
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];
    char result[1000];
    int j = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]s", sentence);

    for (int i = 0; i < strlen(sentence); i++) {
        if (sentence[i] != ' ') {
            if (sentence[i] == '.') {
                result[j++] = ':';
            } else {
                result[j++] = sentence[i];
            }
        }
    }

    result[j] = '\0'; // Null-terminate the result string

    printf("Modified sentence: %s\n", result);
    return 0;
}
