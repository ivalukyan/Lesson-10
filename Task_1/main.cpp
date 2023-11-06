#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct Resistor{

private :
    double curent = 1.5;
public:
    string name = "R1";
    double resistance = 150.5;
    double power = resistance * pow(curent, 2);
};

int main() {
    Resistor _resistor;
    cout << endl << _resistor.power;
    return 0;
}
