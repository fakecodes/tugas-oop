#include <iostream>
using namespace std;

class Kendaraan {
public:
    virtual void PrintInfo() {
        cout << "Informasi Kendaraan" << endl;
        cout << "Nama\t\t: Mobil" << endl;
        cout << "Jumlah Roda\t: 4 Buah" << endl << endl;
    }
};

class Mobil : public Kendaraan {
public:

};

class Motor : public Kendaraan {
    public:
    void PrintInfo() {
        cout << "Informasi Kendaraan" << endl;
        cout << "Nama\t\t: Motor" << endl;
        cout << "Jumlah Roda\t: 2 Buah" << endl << endl;
    }
};

class Bajaj : public Kendaraan {
    public:
    void PrintInfo() {
        cout << "Informasi Kendaraan" << endl;
        cout << "Nama\t\t: Bajaj" << endl;
        cout << "Jumlah Roda\t: 3 Buah" << endl << endl;
    }
};

int main() {
    Kendaraan* mobil = new Mobil;
    Kendaraan* motor = new Motor;
    Kendaraan* bajaj = new Bajaj;

    Kendaraan* kendaraan[3] = {mobil, motor, bajaj};
    for (int i=0; i<3; i++) {
        kendaraan[i]->PrintInfo();
    }

    return 0;
}
