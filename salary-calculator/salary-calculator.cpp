#include <iostream>
#include <string>
#include <map>
#include <locale>
#include <iomanip>
using namespace std;

class currNumpunct : public numpunct<char>
{
  protected:
    virtual char do_thousands_sep() const
    {
        return '.';
    }

    virtual string do_grouping() const
    {
        return "\03";
    }
    friend class SalaryCalculator;
};

class SalaryCalculator {
public:
    int adjustOvertime(int t, int vt) {
        if (t > 3) {
            return vt + ((t-3) * 50000);
        } else if (t > 0 && t <= 3) {
            return vt;
        } else {
            return 0;
        }
    }

    double deduction(int bs, int ot, int t) {
        return (bs + ot) * (t / 100.0);
    }

    int calculateTHP(int bs, int ot, int d) {
        return bs+ot-d;
    }

    void printInfo(int g, int bs, int bo, int t, int oih, int aot, int d, int thp) {
        locale comma_locale(locale(), new currNumpunct());
        cout.imbue(comma_locale);
        cout << "Golongan: " << g << ", Base Salary: Rp. " << bs << ",- , Tax: " << t << "%" << ", Overtime (1h-3h): Rp. " << bo << ",- " << endl;
        cout << endl << "====================================================================================" << endl << endl;
        cout << "Overtime in Hour\t: " << oih << endl;
        cout << "Overtime Pay\t\t: Rp. " << aot << ",-" << endl;
        cout << "Total Deduction\t\t: Rp. " << d << ",-" << endl;
        cout << "Take Home Pay\t\t: Rp. " << thp << ",-" << endl;
    }
};

int main () {
    int golongan, overtime;
    
    cout << "Input Golongan\t: "; cin >> golongan;
    cout << "Jam Lembur\t: "; cin >> overtime;

    map < int, int > BaseSalary, Tax, OverTimeLessThanEqualsThree;
    map < int, int >::iterator MyIterMap; 
    
        // Mapping the nominal per category / golongan
        BaseSalary[1] = 5000000;
        Tax[1] = 5;
        OverTimeLessThanEqualsThree[1] = 0;
        BaseSalary[2] = 4000000;
        Tax[2] = 4;
        OverTimeLessThanEqualsThree[2] = 0;
        BaseSalary[3] = 3000000;
        Tax[3] = 3;
        OverTimeLessThanEqualsThree[3] = 100000;
        BaseSalary[4] = 2000000;
        Tax[4] = 2;
        OverTimeLessThanEqualsThree[4] = 150000;
        
    MyIterMap = BaseSalary.begin();
    cout << endl << "================================= Salary Calculator ================================" << endl << endl;
    while(MyIterMap != BaseSalary.end()) {
        int key = (*MyIterMap).first;
        if (key == golongan) {
            SalaryCalculator sc;
            int adjustedOverTime = sc.adjustOvertime(overtime, OverTimeLessThanEqualsThree[key]);
            int deduction = (int)sc.deduction(BaseSalary[key], adjustedOverTime, Tax[key]);
            int takeHomePay = sc.calculateTHP(BaseSalary[key], adjustedOverTime, deduction);
            sc.printInfo(key, BaseSalary[key], OverTimeLessThanEqualsThree[key], Tax[key], overtime, adjustedOverTime, deduction, takeHomePay);
        }
        MyIterMap++;
    }
    cout << endl << "====================================================================================" << endl;
    cout << "Note:" << endl;
    cout << "Overtime pay will be increased by 50k if overtime is more than 3 hours in each golongan." << endl << endl;

    return 0;
}
