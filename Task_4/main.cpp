#include <iostream>
#include <string>
using namespace std;

struct Transmitter{
    int type;
    string modulation;
    float power;
    float resistance;
    float freq;
};

void show_transmitter(Transmitter _transmitter){
    cout << "Type: " << _transmitter.type << endl;
    cout << "Modulation: " << _transmitter.modulation << endl;
    cout << "Power: " << _transmitter.power << endl;
    cout << "Resistance: " << _transmitter.resistance << endl;
    cout << "Frequency: " << _transmitter.freq << endl;
}

int main() {
    Transmitter _transmitter[2]{{1, "FM", 12.3, 3.4, 4.5}, {2, "AM", 13.5, 2.4, 5.6}};
    for (int i = 0; i < 2; ++i){
        show_transmitter(_transmitter[i]);
        cout << "\n";
    }
    return 0;
}
