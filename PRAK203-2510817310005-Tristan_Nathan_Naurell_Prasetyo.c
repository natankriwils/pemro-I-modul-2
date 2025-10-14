#include <stdio.h>

int main(){
    double a, b, i, j, x, y;
    double hasil1, hasil2, hasil3, hasil4, hasil5;

    printf("Masukkan nilai a: ");
    scanf("%lf", &a);
    printf("Masukkan nilai b: ");
    scanf("%lf", &b);
    printf("Masukkan nilai c: ");
    scanf("%lf", &i);
    printf("Masukkan nilai d: ");
    scanf("%lf", &j);
    printf("Masukkan nilai e: ");
    scanf("%lf", &x);
    printf("Masukkan nilai f: ");
    scanf("%lf", &y);

    hasil1 = (a - b) * (i / j) - (x + y);
    printf("Hasil 1: %.3f\n", hasil1);

    return 0;
}