#include <iostream>
using namespace std; 

// Base class atau class induk
class Kuliah { 
    protected: 
    int nilai; //default nilai if not defined
    
    public: 
    void setNilai(int a) {
        nilai = a;
    }
    int getNilai() {
        return nilai; 
    } 
};

// Class turunan
class Oop: public Kuliah { 
    public: 
    int getNilai() {
        return nilai; 
    } 
}; 

// Class turunan
class Alprog: public Kuliah { 
    public: 
    int getNilai(){ 
        return nilai; 
    } 
};
 
// Main program
int main () { 

    // Inisiasi Object
    Oop myOop;
    Kuliah myKuliah;
    Alprog myAlprog;

    // Inisiasi Nilai
    myKuliah.setNilai(70);
    myOop.setNilai(80);
    myAlprog.setNilai(90);
    
    // Get return values
    cout << "Nilai Kuliah : " << myKuliah.getNilai() << endl;
    cout << "Nilai OOP : " << myOop.getNilai() << endl;
    cout << "Nilai Algo : " << myAlprog.getNilai() << endl;
    return 0; 
}
