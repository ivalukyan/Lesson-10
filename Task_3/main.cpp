#include <iostream>
#include <string>
using namespace std;

struct Object{
private:
    double weight;
public:
    void set_mas(double n){weight = n;}
    double get_mas() const{return weight;}
    double velocity = 10.0;
    string name = "kamen";
};

int main() {
    Object _object;
    double  mas;
    cout << "weight = ";
    cin >> mas;
    _object.set_mas(mas);
    cout << _object.get_mas();
    return 0;
}
