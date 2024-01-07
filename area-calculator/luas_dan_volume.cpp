#include <iostream>
using namespace std;

class PersegiPanjang {
public:
    int panjang, lebar, luas;

    int setPanjang(int p) {
        return panjang = p;
    }
    
    int setLebar(int l) {
        return lebar = l;
    } 

    void hitungLuasPersegiPanjang(int p, int l) {
        cout << endl << "Panjang\t: " << p << endl;
        cout << "Lebar\t: " << l << endl;
        cout << "Luas\t: " << setPanjang(p) * setLebar(l) << endl;
    }
};

class Balok : public PersegiPanjang {
public:
    int tinggi, volume;

    int setTinggi(int t) {
        return tinggi = t;
    }
    void hitungVolumeBalok(int p, int l, int t) {
        cout << endl << "Panjang\t: " << p << endl;
        cout << "Lebar\t: " << l << endl;
        cout << "Tinggi\t: " << t << endl;
        cout << "Volume\t: " << setPanjang(p) * setLebar(l) * setTinggi(t) << endl;
    }
};
