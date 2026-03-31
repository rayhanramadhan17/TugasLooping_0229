#include <iostream>
using namespace std;

// Variabel global
int angka, pilihan;

// Function untuk menampilkan menu
int menu() {
    cout << "\n===== MENU PENGECEKAN BILANGAN =====" << endl;
    cout << "1. Cek Bilangan Prima" << endl;
    cout << "2. Cek Bilangan Fibonacci" << endl;
    cout << "0. Keluar" << endl;
    cout << "Pilih menu: ";
    cin >> pilihan;
    return pilihan;
}

// Prosedur untuk input angka
void inputAngka() {
    cout << "Masukkan sebuah bilangan: ";
    cin >> angka;
}

// Function bool untuk mengecek bilangan prima
bool cekPrima(int n) {
    if (n < 2) {
        return false;
    }

    int i = 2;
    while (i < n) {
        if (n % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}

// Function bool untuk mengecek bilangan Fibonacci
bool cekFibonacci(int n) {
    if (n < 0) {
        return false;
    }

    int a = 0, b = 1, c = 0;

   