#include <iostream>
#include "luas_dan_volume.cpp"
using namespace std;

int main() {
    int input1, panjang, lebar, tinggi;
    cout << endl << "=================== Area Calculator ===================" << endl << endl;
    cout << "Input (1) untuk menghitung luas persegi panjang." << endl;
    cout << "Input (2) untuk menghitung volume balok." << endl;
    cout << "Masukan Pilihan : "; cin >> input1;
    cout << endl;
    cout << "Masukan panjang : "; cin >> panjang;
    cout << "Masukan lebar : "; cin >> lebar;
    Balok b;
    switch (input1) {
        case 1:
            b.hitungLuasPersegiPanjang(panjang, lebar);
            break;
        case 2:
            cout << "Masukan tinggi : "; cin >> tinggi;
            cout << endl;
            b.hitungVolumeBalok(panjang, lebar, tinggi);
            break;
        default:
            cout << "Pilihan yang anda masukan tidak ada!";
            break;;
    }
    cout << endl << "=======================================================" << endl << endl;
    return 0;
}
