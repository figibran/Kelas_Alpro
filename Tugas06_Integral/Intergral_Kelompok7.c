#include <stdio.h>
#include <math.h>

double f(double x) {
    return 4 * x * x + 7 * x - 5;
}

double trapezoid(double a, double b, double N) {
    double h = (b - a) / N;
    double hasil = 0.5 * (f(a) + f(b));
    for (double i = 1; i < N; i++) {
        double x = a + i * h;
        hasil += f(x);
    }
    return hasil * h;
}

int main() {
    // Input batas dan jumlah blok trapesium
    double a = 0.0; // batas bawah
    double b = 2.0; // batas atas
    double N;

    printf("Masukkan nilai N (jumlah blok)\t: ");
    scanf("%lf", &N);

    // Hitung integral 
    double integral_analitik = ((1.0 / 3.0) * (4 * pow(b, 3) + 7 * pow(b, 2) - 5 * b) - (1.0 / 3.0) * (4 * pow(a, 3) + 7 * pow(a, 2) - 5 * a));
    double integral_numerik = trapezoid(a, b, N);

    // Outputkan hasil
    printf("\nHasil integral dari %lf sampai %lf dengan N = %lf:\n", a, b, N);
    printf("Metode Analitik: %lf\n", integral_analitik);
    printf("Metode Numerik (Trapezoid): %lf\n", integral_numerik);

    return 0;
}