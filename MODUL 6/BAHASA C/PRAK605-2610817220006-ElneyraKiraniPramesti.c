#include <stdio.h>

int main() {
    int matrix_order;
    if (scanf("%d", &matrix_order) != 1 || matrix_order <= 0 || matrix_order > 100) {
        return 1;
    }

    int matrix_a[100][100];
    int matrix_b[100][100];
    char label_1[20], label_2[20];
    if (scanf("%s %s", label_1, label_2) != 2) return 1;
    for (int i = 0; i < matrix_order; i++) {
        for (int j = 0; j < matrix_order; j++) {
            if (scanf("%d", &matrix_a[i][j]) != 1) return 1;
        }
    }

    if (scanf("%s %s", label_1, label_2) != 2) return 1;
    for (int i = 0; i < matrix_order; i++) {
        for (int j = 0; j < matrix_order; j++) {
            if (scanf("%d", &matrix_b[i][j]) != 1) return 1;
        }
    }

    printf("Matriks AXB\n");
    for (int i = 0; i < matrix_order; i++) {
        for (int j = 0; j < matrix_order; j++) {
            int value = 0;
            for (int k = 0; k < matrix_order; k++) {
                value += matrix_a[i][k] * matrix_b[k][j];
            }
            printf("%d%c", value, j == matrix_order - 1 ? '\n' : ' ');
        }
    }

    return 0;
}