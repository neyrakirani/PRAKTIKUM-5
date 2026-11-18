#include <stdio.h>

int main() {
    int number_room, i;
    int number_zetsu[1000];

    scanf("%d", &number_room);
    for (i = 0; i < number_room; i++)
        scanf("%d", &number_zetsu[i]);

    for (i = 0; i < number_room; i++) {
        if (i > 0) printf(" ");
        printf("%d", number_zetsu[i] * (i + 1));
    }
    printf("\n");
    return 0;
}