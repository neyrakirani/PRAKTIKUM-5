row, column = map(int, input().split())
number = list(map(int, input().split()))

for i in range(row):
    one_row = number[i * column : (i + 1) * column]
    print(*one_row)