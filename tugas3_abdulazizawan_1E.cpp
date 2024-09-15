#include <stdio.h>
using namespace std;
int main() {
    int skor;

    // Minta input dari pengguna
    printf("Masukkan skor Anda: ");
    scanf("%d", &skor);

    // Menilai skor berdasarkan rentang yang diberikan
    if (skor >= 90) {
        printf("Anda mendapatkan nilai A\n");
    } else if (skor >= 80) {
        printf("Anda mendapatkan nilai B\n");
    } else if (skor >= 70) {
        printf("Anda mendapatkan nilai C\n");
    } else if (skor >= 60) {
        printf("Anda mendapatkan nilai D\n");
    } else {
        printf("Anda mendapatkan nilai E\n");
    }

    return 0;
}

//no 2 


#include <stdio.h>  // Untuk printf dan scanf
using namespace std;  // Menggunakan namespace std

int main() {
    int angka1, angka2, angka3;
    
    // Meminta input dari pengguna
    printf("Masukkan angka pertama: ");
    scanf("%d", &angka1);
    
    printf("Masukkan angka kedua: ");
    scanf("%d", &angka2);
    
    printf("Masukkan angka ketiga: ");
    scanf("%d", &angka3);
    
    // Menentukan angka terbesar
    int terbesar = angka1;
    
    if (angka2 > terbesar) {
        terbesar = angka2;
    }
    
    if (angka3 > terbesar) {
        terbesar = angka3;
    }
    
    // Mencetak hasil
    printf("Angka terbesar adalah: %d\n", terbesar);
    
    return 0;
}


//no 3


#include <cstdio>  // Untuk printf dan scanf
using namespace std;  // Menggunakan namespace std

int main() {
    int pilihan;
    
    // Menampilkan menu pilihan
    printf("Pilih bentuk geometris untuk menghitung luas:\n");
    printf("1. Persegi\n");
    printf("2. Persegi Panjang\n");
    printf("3. Segitiga\n");
    printf("Masukkan pilihan (1/2/3): ");
    scanf("%d", &pilihan);

    switch (pilihan) {
        case 1: {
            // Menghitung luas persegi
            double sisi;
            printf("Masukkan panjang sisi persegi: ");
            scanf("%lf", &sisi);
            double luasPersegi = sisi * sisi;
            printf("Luas persegi adalah: %.2lf\n", luasPersegi);
            break;
        }
        case 2: {
            // Menghitung luas persegi panjang
            double panjang, lebar;
            printf("Masukkan panjang persegi panjang: ");
            scanf("%lf", &panjang);
            printf("Masukkan lebar persegi panjang: ");
            scanf("%lf", &lebar);
            double luasPersegiPanjang = panjang * lebar;
            printf("Luas persegi panjang adalah: %.2lf\n", luasPersegiPanjang);
            break;
        }
        case 3: {
            // Menghitung luas segitiga
            double alas, tinggi;
            printf("Masukkan alas segitiga: ");
            scanf("%lf", &alas);
            printf("Masukkan tinggi segitiga: ");
            scanf("%lf", &tinggi);
            double luasSegitiga = 0.5 * alas * tinggi;
            printf("Luas segitiga adalah: %.2lf\n", luasSegitiga);
            break;
        }
        default:
            printf("Pilihan tidak valid!\n");
            break;
    }

    return 0;
}


