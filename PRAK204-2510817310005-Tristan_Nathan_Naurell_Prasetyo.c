#include <stdio.h>

int main() {
    double r, t;
    const double phi = 22.0 / 7.0;
    double volume, luas, keliling;

    printf("Masukkan jari-jari: ");
    scanf("%lf", &r);
    printf("Masukkan tinggi: ");
    scanf("%lf", &t);

    volume = phi * r * r * t;
    luas = 2 * phi * r * (r + t);
    keliling = 2 * phi * r;

    printf("volume = %.2f\n", volume);
    printf("luas = %.2f\n", luas);
    printf("keliling = %.2f\n", keliling);
    return 0;
}