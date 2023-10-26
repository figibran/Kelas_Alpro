#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int angka1, angka2;

    printf("Masukkan dua bilangan: ");
    scanf("%d %d", &angka1, &angka2);

    int hasil = gcd(angka1, angka2);
    printf("GCD dari %d dan %d adalah %d\n", angka1, angka2, hasil);

return 0;

}
