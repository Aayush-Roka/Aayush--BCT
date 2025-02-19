#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[1000];
    int char_count = 0, word_count = 0;
    int in_word = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]s", sentence);

    char_count = strlen(sentence); // Count characters using strlen

    for (int i = 0; i < char_count; i++) {
        if (isspace(sentence[i])) {
            in_word = 0;
        } else if (in_word == 0) {
            in_word = 1;
            word_count++;
        }
    }

    printf("The sentence has %d characters and %d words.\n", char_count, word_count);
    return 0;
}
