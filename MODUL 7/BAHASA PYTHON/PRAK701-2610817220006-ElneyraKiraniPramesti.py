front_name = input("Nama Depan : ")
back_name = input("Nama Belakang : ")

print(f"Nama Lengkap : {front_name} {back_name}")
print(f"Panjang Nama (tanpa spasi) : {len((front_name + back_name).replace(' ', ''))}")