#include <iostream>
using namespace std;


class BelahKetupat;

class LayangLayang {
private:
    double d1, d2;
    double s1, s2;

public:
    void input() {
        cout << "=== Layang-Layang ===" << endl;
        cout << "Diagonal 1: "; cin >> d1;
        cout << "Diagonal 2: "; cin >> d2;
        cout << "Sisi 1: "; cin >> s1;
        cout << "Sisi 2: "; cin >> s2;
    }