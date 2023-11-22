#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void displayNilaiAkhir(char nama[], int nim, int nilaiAkhir, char hurufMutu[], char keterangan[]) {
    printf("\nNama Mahasiswa: %s", nama);
    printf("\nNIM: %d", nim);
    printf("\nNilai Akhir: %d", nilaiAkhir);
    printf("\nHuruf Mutu: %s", hurufMutu);
    printf("\nKeterangan: %s\n", keterangan);
}

int calcNilai(int tugas, int quiz, int UTS, int UAS) {
    int nilaiAkhir = (10 * tugas + 20 * quiz + 30 * UTS + 40 * UAS) / 100;
    return nilaiAkhir;
}

int main() {
    system ("cls");
    char nama[50];
    int nim, tugas, quiz, UTS, UAS, nilaiAkhir;
    char hurufMutu[10], keterangan[50];

    printf("Masukkan nama mahasiswa: ");
    scanf("%s", nama);
    printf("Masukkan NIM: ");
    scanf("%d", &nim);
    printf("Masukkan nilai tugas: ");
    scanf("%d", &tugas);
    printf("Masukkan nilai quiz: ");
    scanf("%d", &quiz);
    printf("Masukkan nilai UTS: ");
    scanf("%d", &UTS);
    printf("Masukkan nilai UAS: ");
    scanf("%d", &UAS);

    nilaiAkhir = calcNilai(tugas, quiz, UTS, UAS);

    if (nilaiAkhir >= 90) {
        strcpy(hurufMutu, "A");
        strcpy(keterangan, "Lulus");
    } else if (nilaiAkhir >= 81 && nilaiAkhir <= 90) {
        strcpy(hurufMutu, "AB");
        strcpy(keterangan, "Lulus");
    } else if (nilaiAkhir >= 71 && nilaiAkhir <= 80) {
        strcpy(hurufMutu, "B");
        strcpy(keterangan, "Lulus");
    } else if (nilaiAkhir >= 61 && nilaiAkhir <= 70) {
        strcpy(hurufMutu, "BC");
        strcpy(keterangan, "Lulus");
    } else if (nilaiAkhir >= 51 && nilaiAkhir <= 60) {
        strcpy(hurufMutu, "C");
        strcpy(keterangan, "Lulus");
    } else if (nilaiAkhir >= 45 && nilaiAkhir <= 50) {
        strcpy(hurufMutu, "D");
        strcpy(keterangan, "Tidak Lulus");
    } else {
        strcpy(hurufMutu, "E");
        strcpy(keterangan, "Tidak Lulus");
    }

    displayNilaiAkhir(nama, nim, nilaiAkhir, hurufMutu, keterangan);

    return 0;
}