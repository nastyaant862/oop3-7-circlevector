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
    
    int N;
    Vector* coord_array;
public:
    //double Length();
    double x, y;

    Vector() {
        x = 0;
        y = 0;
    }
    /*Vector(double x_coord, double y_coord) {
        x = x_coord;
        y = y_coord;
    }*/

    Vector(int N) {
        coord_array = new Vector[N]; 
    }

    void setValue(int ind, Vector value) {
        coord_array[ind] = value;
    }

    void PrintMassive(int N);

    ~Vector() {
        delete[]coord_array;
    }
};

#endif