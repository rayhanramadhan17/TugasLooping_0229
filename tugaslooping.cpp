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

