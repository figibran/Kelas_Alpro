#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    char jenisKelamin;
    float BeratBadan, TinggiBadan, bmi;

    printf("\n=========Selamat Datang Di Kalkulator BMI Kelompok 7 TF3=========\n\n");
    printf("Masukkan jenis kelamin (L/P): ");
    scanf("%c", &jenisKelamin);

    printf("Masukkan tinggi badan (cm): ");
    scanf("%f", &TinggiBadan);

    printf("Masukkan berat badan (Kg): ");
    scanf("%f", &BeratBadan);

    TinggiBadan = TinggiBadan / 100;

    bmi = BeratBadan/(TinggiBadan*TinggiBadan);  //rumus dari bmi

    printf("\nNilai BMI: %.2f\n", bmi);
    
    if (jenisKelamin == 'L' || jenisKelamin == 'l') {
        if (bmi >=17 && bmi <=23) {
            printf("Kategori berat badan: Badan Ideal\n");
            printf("==========Tetap Jaga Kesehatan Anda==========\n\n");
        } else if (bmi<17) {
            printf("Kategori berat badan: Badan Tidak Ideal\n");
            printf("==========Anda Terlalu Kurus==========\n\n");
        } else if (bmi>23) {
            printf("Kategori berat badan: Badan Tidak Ideal\n");
            printf("==========Anda Terlalu Gemuk==========\n\n");
        } else {
            printf("Kategori berat badan: Badan Tidak Ideal\n");
            printf("==========Periksa Kembali Data Yang Anda Masukan==========\n\n");
        }
    }

    if (jenisKelamin == 'P' || jenisKelamin == 'p') {
        if (bmi >=18 && bmi <=25) {
            printf("Kategori berat badan: Badan Ideal\n");
            printf("==========Tetap Jaga Kesehatan Anda==========\n\n");
        } else if (bmi<18) {
            printf("Kategori berat badan: Badan Tidak Ideal\n");
            printf("==========Anda Terlalu Kurus==========\n\n");
        } else if (bmi>25) {
            printf("Kategori berat badan: Badan Tidak Ideal\n");
            printf("==========Anda Terlalu Gemuk==========\n\n");
         } else {
            printf("Kategori berat badan: Badan Tidak Ideal\n");
            printf("=====Periksa Kembali Data Yang Anda Masukan==========\n\n");
        } 

     }

    return 0;
}
