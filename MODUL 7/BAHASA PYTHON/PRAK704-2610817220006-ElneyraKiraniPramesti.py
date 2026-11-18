word = input()
if len(word) > 20:
    print(word[0:20] + "...")
else:
    print(word)