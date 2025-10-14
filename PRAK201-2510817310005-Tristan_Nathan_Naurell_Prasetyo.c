#include <stdio.h>

int main() {
    char nama[50], nim[20], tempat_tangga_lahir[30], alamat[50], hobi[20], no_hp[15];

    printf("Nama: ");
    gets(nama);
    printf("NIM: ");
    gets(nim);
    printf("Tempat/Tanggal Lahir: ");
    gets(tempat_tangga_lahir);
    printf("Alamat: ");
    gets(alamat);
    printf("Hobi: ");
    gets(hobi);
    printf("No HP: ");
    gets(no_hp);

    printf("\n");
    printf("Nama                 : %s\n", nama);
    printf("NIM                  : %s\n", nim);
    printf("Tempat/Tanggal Lahir : %s\n", tempat_tangga_lahir);
    printf("Alamat               : %s\n", alamat);
    printf("Hobi                 : %s\n", hobi);
    printf("No HP                : %s\n", no_hp);
    return 0;
}