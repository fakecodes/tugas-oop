#include <iostream>
#include "conversion.cpp"
using namespace std;

int main() {
    int suhu;
    cout << "Input Suhu\t: "; cin >> suhu;
    cout << endl << "=========================== Temperature Conversion ===========================" << endl << endl;
    ConversionFromCelcius c;
    c.celciusFunction(suhu);
    ConversionFromKelvin k;
    k.kelvinFunction(suhu);
    ConversionFromFahrenheit f;
    f.fahrenheitFunction(suhu);
    cout << endl << "==============================================================================" << endl << endl;
    return 0;
}
