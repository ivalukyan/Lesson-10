#include <iostream>
using namespace std;

struct Point{
private:
    double multiply = 2.0;
public:
    void setMultiply(double n){multiply = n;}
    double getMultiply(){return multiply;}
        double x ;
        double y ;
};

void chet(double x, double y){
    if (y > 0){
        if (x > 0){
           cout << "1";
        }
        else {
            cout << "2";
        }
    }
    else{
       if (x > 0){
           cout << "4";
       }
       else {
           cout << "3";
       }
    }
}

int main() {
    Point _point;
    cout << "x = ";
    cin >> _point.x;
    _point.x *= _point.getMultiply();
    cout << "y = ";
    cin >> _point.y;
    _point.y *= _point.getMultiply();
    chet(_point.x, _point.y);
    return 0;
}
