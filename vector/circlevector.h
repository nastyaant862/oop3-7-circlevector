#ifndef CIRCLEVECTOR_H
#define CIRCLEVECTOR_H

#include <iostream>
using namespace std;

class Circle {
private:
    double r; 
public:
    Circle() : r(0) {}
    Circle(double A) : r(A) {}

    double Area();
    double Length();
    void SetRad (double radius) {
        if (radius > 0) { r = radius; }
        else { cerr << "Radius must be positive./n"; }
    }
    double GetRad() { return r; }
};


class Vector {
private:
    double x, y;
public:
    double LengthV();

    Vector() : x(0), y(0) {}
    Vector(int a, int b) {
        x = a;
        y = b;
    }

    Vector(const Vector &other) {
        this->x = other.x;
        this->y = other.y;
    }

    void setValueX(int xx) {x = xx;}
    void setValueY(int yy) {y = yy;}
    double getValueX() { return x; }
    double getValueY() { return y; }

    /*
    ~Vector() {
        delete[]coord_array;
    }*/
};

#endif