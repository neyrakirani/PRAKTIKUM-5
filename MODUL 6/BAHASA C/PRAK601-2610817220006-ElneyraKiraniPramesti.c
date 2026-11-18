#include <stdio.h>

int main() {
    int row, column;
    if (scanf("%d %d", &row, &column) != 2) {
        return 0;
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            int number;
            if (scanf("%d", &number) != 1) {
                return 0;
            }
            if (j > 0) {
                printf(" ");
            }
            printf("%d", number);
        }
        printf("\n");
    }

    return 0;
}