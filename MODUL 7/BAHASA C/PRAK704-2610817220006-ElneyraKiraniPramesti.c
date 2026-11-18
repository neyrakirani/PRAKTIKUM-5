#include <stdio.h>
#include <string.h>

int main() {
    char word[1000];

    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\r\n")] = '\0';

    if (strlen(word) > 20) {
        word[20] = '\0';
        printf("%s...\n", word);
    } else {
        printf("%s\n", word);
    }
    return 0;
}