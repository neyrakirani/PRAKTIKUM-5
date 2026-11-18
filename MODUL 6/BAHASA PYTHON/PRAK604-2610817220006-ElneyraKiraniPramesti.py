code = input()
message = input()

if len(code) != len(message):
    print("Panjang kalimat berbeda, pesan palsu")
else:
    result = ""
    star = 0
    hashtag = 0
    for i in range(len(code)):
        if code[i] == " " and message[i] == " ":
            result += " "          
        elif code[i] == message[i]:
            result += "*"
            star += 1
        else:
            result += "#"
            hashtag += 1

    print(result)
    print("* =", star)
    print("# =", hashtag)
    if star >= hashtag:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")