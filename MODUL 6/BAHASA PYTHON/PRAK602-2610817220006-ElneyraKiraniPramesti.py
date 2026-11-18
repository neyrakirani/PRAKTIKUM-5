number_room = int(input())
number_zetsu = list(map(int, input().split()))

result = []
for i in range(number_room):
    result.append(number_zetsu[i] * (i + 1))

print(*result)