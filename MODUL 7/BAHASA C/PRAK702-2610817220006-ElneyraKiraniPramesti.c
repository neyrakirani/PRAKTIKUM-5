#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char word[100];
    int i, n, palindrom = 1;

    scanf("%s", word);
    n = strlen(word);

    for (i = 0; i < n / 2; i++) {
        if (tolower(word[i]) != tolower(word[n - 1 - i])) {
            palindrom = 0;
            break;
        }
    }

    if (palindrom)
        printf("Kata '%s' adalah palindrom\n", word);
    else
        printf("Kata '%s' bukan palindrom\n", word);
    return 0;
}