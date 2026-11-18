#include <stdio.h>
#include <string.h>

int main() {
    char front_name[50];
    char back_name[50];
    int length;

    printf("Nama Depan : ");
    fgets(front_name, sizeof(front_name), stdin);
    front_name[strcspn(front_name, "\r\n")] = '\0';
    printf("Nama Belakang : ");
    fgets(back_name, sizeof(back_name), stdin);
    back_name[strcspn(back_name, "\r\n")] = '\0';

    printf("Nama Lengkap : %s %s\n", front_name, back_name);

    length = (int)(strlen(front_name) + strlen(back_name));
    for (int i = 0; front_name[i] != '\0'; i++) {
        if (front_name[i] == ' ') {
            length--;
        }
    }
    for (int i = 0; back_name[i] != '\0'; i++) {
        if (back_name[i] == ' ') {
            length--;
        }
    }

    printf("Panjang Nama (tanpa spasi) : %d\n", length);

    return 0;
}