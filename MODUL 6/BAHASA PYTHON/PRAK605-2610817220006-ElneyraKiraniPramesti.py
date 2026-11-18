matrix_order = int(input())
label_a = input()
matrix_a = [list(map(int, input().split())) for _ in range(matrix_order)]

label_b = input()
matrix_b = [list(map(int, input().split())) for _ in range(matrix_order)]

print("Matriks AXB")
matrix_axb = [[0] * matrix_order for _ in range(matrix_order)]
for i in range(matrix_order):
    for j in range(matrix_order):
        for k in range(matrix_order):
            matrix_axb[i][j] += matrix_a[i][k] * matrix_b[k][j]

for row in matrix_axb:
    print(*row)