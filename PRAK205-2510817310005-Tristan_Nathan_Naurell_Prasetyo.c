#include <stdio.h>
#include <math.h>

int main(){
    float a, b, alas, tinggi, keliling, luas;
    scanf("%f", &a);
    scanf("%f", &b);

    alas = sqrt(b*b - a*a);
    tinggi = a;
    keliling = a + b + alas;
    luas = 0.5 * alas * tinggi;

    printf("alas = %.0f cm\n", alas);
    printf("tinggi = %.0f cm\n", tinggi);
    printf("keliling = %.0f cm\n", keliling);
    printf("luas = %.0f cm^2\n", luas);

    scanf("%f", &a);
    scanf("%f", &b);

    alas = sqrt(b*b - a*a);
    tinggi = a;
    keliling = a + b + alas;
    luas = 0.5 * alas * tinggi;

    printf("alas = %.0f cm\n", alas);
    printf("tinggi = %.0f cm\n", tinggi);
    printf("keliling = %.0f cm\n", keliling);
    printf("luas = %.0f cm^2\n", luas);
    return 0;
}
