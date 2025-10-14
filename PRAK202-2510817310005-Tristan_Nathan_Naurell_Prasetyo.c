#include <stdio.h>

int main(){
    float nilai1, nilai2, hasil;

    printf("Masukkan nilai pertama: ");
    scanf("%f", &nilai1);
    printf("Masukkan nilai kedua: ");
    scanf("%f", &nilai2);

    hasil = nilai1 + nilai2;

    if(nilai1 == (int)nilai1) 
    {
        printf("Hasil dari penjumlahan nilai pertama \"%.0f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"\n", nilai1, nilai2, hasil);
    }
    else 
    {
        printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"\n", nilai1, nilai2, hasil);
    }
    return 0;
}