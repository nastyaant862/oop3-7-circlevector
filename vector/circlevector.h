#ifndef CIRCLEVECTOR_H
#define CIRCLEVECTOR_H

#include <iostream>
using namespace std;

class Circle {
private:
    double r;

public:
    double Area();
    double Length();
    void SetRad (double radius) {
        if (radius > 0) {
            r = radius;
        }
        else {
            cerr << "Radius must be positive./n";
        }
    }
    double GetRad() { return r; }

    Circle(double R) {
        r = R;
    }
};

class Vector {
private:
    double x, y;
public:
    double LengthV();

    Vector() : x(0), y(0) {}

    Vector(const Vector &other) {
        this->x = other.x;
        this->y = other.y;
        /*this->size = other.size;
        this->coord_array = new Vector[other.size];
        for (int i = 0; i < other.size; i++) {
            this->coord_array[i] = other.coord_array[i];
        }*/
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