#include <iostream>
using namespace std;

class Conversion {
public:
    double num, celcius, fahrenheit, kelvin, reamur;
};

class ConversionFromCelcius : public Conversion {
public:
    double setCelcius(int num) {
        return Conversion::celcius = num;
    }
    double getKelvin() {
        return Conversion::kelvin = Conversion::celcius + 273.15;
    }
    double getFahrenheit() {
        return Conversion::fahrenheit = (Conversion::celcius * 1.8) + 32;
    }
    double getReamur() {
        return Conversion::reamur = Conversion::celcius * 0.8;
    }
    void printInfo() {
        cout << "Input suhu\t: " << Conversion::celcius << " celcius" << endl;
        cout << "Hasil Celcius Ke Kelvin\t\t: " << Conversion::kelvin << endl;
        cout << "Hasil Celcius Ke Fahrenheit\t: " << Conversion::fahrenheit << endl;
        cout << "Hasil Celcius Ke Reamur\t\t: " << Conversion::reamur << endl << endl;
    }
    void celciusFunction(int num) {
        setCelcius(num);
        getKelvin();
        getFahrenheit();
        getReamur();
        printInfo();
    }
};

class ConversionFromKelvin : public Conversion {
public:
    double setKelvin(int num) {
        return Conversion::kelvin = num;
    }
    double getCelcius() {
        return Conversion::celcius = Conversion::kelvin - 273.15;
    }
    double getFahrenheit() {
        return Conversion::fahrenheit = (Conversion::kelvin * 1.8) - 459.67;
    }
    double getReamur() {
        return Conversion::reamur = (Conversion::celcius - 273.15) * 0.8;
    }
    void printInfo() {
        cout << "Input suhu\t: " << Conversion::kelvin << " kelvin" << endl;
        cout << "Hasil Kelvin Ke Celcius\t\t: " << Conversion::celcius << endl;
        cout << "Hasil Kelvin Ke Fahrenheit\t: " << Conversion::fahrenheit << endl;
        cout << "Hasil Kelvin Ke Reamur\t\t: " << Conversion::reamur << endl << endl;
    }
    void kelvinFunction(int num) {
        setKelvin(num);
        getCelcius();
        getFahrenheit();
        getReamur();
        printInfo();
    }
};

class ConversionFromFahrenheit : public Conversion {
public:
    double setFahrenheit(int num) {
        return Conversion::fahrenheit = num;
    }
    double getCelcius() {
        return Conversion::celcius = ((Conversion::fahrenheit - 32) / 1.8);
    }
    double getKelvin() {
        return Conversion::kelvin = (Conversion::fahrenheit + 459.67) / 1.8;
    }
    double getReamur() {
        return Conversion::reamur = (Conversion::fahrenheit - 32) / 2.25;
    }
    void printInfo() {
        cout << "Input suhu\t: " << Conversion::fahrenheit << " fahrenheit" << endl;
        cout << "Hasil Fahrenheit Ke Kelvin\t: " << Conversion::kelvin << endl;
        cout << "Hasil Fahrenheit Ke Celcius\t: " << Conversion::celcius << endl;
        cout << "Hasil Fahrenheit Ke Reamur\t: " << Conversion::reamur << endl << endl;
    }
    void fahrenheitFunction(int num) {
        setFahrenheit(num);
        getKelvin();
        getCelcius();
        getReamur();
        printInfo();
    }
};
