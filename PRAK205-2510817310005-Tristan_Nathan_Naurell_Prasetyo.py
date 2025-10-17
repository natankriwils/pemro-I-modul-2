import math

a, b = map(float, input().split())

alas = math.sqrt(b**2 - a**2)
tinggi = a
keliling = a + b + alas
luas = 0.5 * alas * tinggi

print("alas = %.0f cm" % alas)
print("tinggi = %.0f cm" % tinggi)
print("keliling = %.0f cm" % keliling)
print("luas = %.0f cm^2" % luas)

a = float(input())
b = float(input())

alas = math.sqrt(b**2 - a**2)
tinggi = a
keliling = a + b + alas
luas = 0.5 * alas * tinggi

print("alas = %.0f cm" % alas)
print("tinggi = %.0f cm" % tinggi)
print("keliling = %.0f cm" % keliling)
print("luas = %.0f cm^2" % luas)
