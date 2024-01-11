#include <iostream>
using namespace std;

class KonversiMataUang {
public:
    double IDRtoUSD(int rupiah) {
        // Rate IDR to USD tanggal 11 January 2023
        return rupiah * 0.000064;
    }
    double IDRtoMYR(int rupiah) {
        // Rate IDR to MYR tanggal 11 January 2023
        return rupiah * 0.00030;
    }
};

int main () {
    int pilih, rupiah;
    bool runAgain;
    
    KonversiMataUang* k = new KonversiMataUang;

    do {
        cout << endl << "Input nilai Rupiah : "; cin >> rupiah;
        cout << endl << "Konversi nilai Rupiah ke :" << endl;
        cout << "(1) US Dollar" << endl;
        cout << "(2) Ringgit Malaysia" << endl << "\tor" << endl;
        cout << "(3) Exit Program" << endl;
        cout << "Pilih : "; cin >> pilih;
        cout << endl;
        switch(pilih) {
            case 1:
                cout << "$" << k->IDRtoUSD(rupiah) << " USD" << endl;
                runAgain = true;
                break;
            case 2:
                cout << "RM" << k->IDRtoMYR(rupiah) << endl;
                runAgain = true;
                break;
            case 3:
                runAgain = false;
                break;
            default:
                cout << "Pilihan tidak ada!" << endl;
                runAgain = true;
                break;
        }  
    } while (runAgain);
    return 0;
}
