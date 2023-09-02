#include<iostream>
#define PI 3.14

class Circle{
private:
    double r;
public:
    void setR(double rr) {
        r = rr;
    }
    double getR() {
        return r;
    }
    double getPermeter(){
        return 2 * PI * r;
    }
    double getArea(){
        return PI * r * r;
    }
};


