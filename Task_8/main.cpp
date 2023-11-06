#include <iostream>
#include <string>
#include <tuple>
#include <vector>
using namespace std;

struct Radiosignal{
private:
    float ampl;
    float freq;
    string name;
public:

    /*Construct*/
    Radiosignal(){ampl = 0; freq = 0; name = "";}
    Radiosignal(float _ampl, float _freq, string _name){ampl = _ampl; freq = _freq; name = _name;}

    /*GET*/
    float getAmplitude(){return ampl;}
    float getFrequency(){return freq;}
    string getName(){return name;}

    /*SET*/
    void SetRadiosignal(float _ampl, float _freq, string _name){ampl = _ampl; freq = _freq; name = _name;}

    /*Output*/
    void seeRadiosignal(){cout << name + " : " + to_string(freq) + ", " + to_string(ampl) << "\n";}
};

struct SignalAnalyser{
private:
    float ThresholdSignalLevel;
    float AcceptableSignalFrequency;
public:

    /*Construct*/
    SignalAnalyser(){ThresholdSignalLevel = 0; AcceptableSignalFrequency = 0;}
    SignalAnalyser(float TSL, float ASF){ThresholdSignalLevel = TSL; AcceptableSignalFrequency = ASF;}

    void check(vector<Radiosignal> &_radioSignal){
        for (int i = 0; i < _radioSignal.size(); i++){
            if (_radioSignal[i].getAmplitude() > ThresholdSignalLevel && _radioSignal[i].getFrequency() < AcceptableSignalFrequency){
                cout << "Name: " << _radioSignal[i].getName() << "\t" << "Amplitude: " << _radioSignal[i].getAmplitude() << "\t" << "Frequency: " << _radioSignal[i].getFrequency() << "\n";
            }
        }
    }
};

int main() {
    Radiosignal signal1, signal2, signal3;
    signal1.SetRadiosignal(12.3, 2.5, "signal 1");
    signal2.SetRadiosignal(14.6, 3.4, "signal 2");
    signal3.SetRadiosignal(9.8, 6.7, "signal 3");

    signal1.seeRadiosignal();
    signal2.seeRadiosignal();
    signal3.seeRadiosignal();

    SignalAnalyser signalanalyser(10.3, 5.4);
    vector<Radiosignal> signals = {signal1, signal2, signal3};
    signalanalyser.check(signals);
    return 0;
}
