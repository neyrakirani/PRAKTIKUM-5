sentence = input("Kalimat : ")
print(f"Jumlah Vokal : {sum(1 for char in sentence if char.lower() in 'aiueo')}")
print(f"Jumlah Konsonan : {sum(1 for char in sentence if char.isalpha() and char.lower() not in 'aiueo')}")