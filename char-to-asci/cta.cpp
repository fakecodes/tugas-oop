#include<iostream>
using namespace std;

class StrToASCI {
private:
    int kodeASCII;
public:
    void convert(string s) {
        cout << "Kode Biner / ASCI\t\t: ";
        for (int i = 0; i < s.length(); i++) {
            kodeASCII = int(s[i]);
            cout << kodeASCII << ", ";
        }
    }
};

int main() {
    string input;
    
    cout << "Masukkan Nama / Karakter\t: "; getline(std::cin >> std::ws, input);

    StrToASCI sta;
    sta.convert(input);
    cout << endl;

    return 0;
}
