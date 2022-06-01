#include "circlevector.h"
#include <iostream>

using namespace std;

double Circle::Area() {
	return (2 * 3.1415 * GetRad());
};

double Circle::Length() {
    return 3.1415 * GetRad();
};

double Vector::LengthV() {
	return (sqrt(pow(this->x, 2) + pow(this->y, 2)));
}


/*
double Vector::Length(int j) {
	return (sqrt(pow(this->coord_array[j].x, 2) + pow(this->coord_array[j].y, 2)));
}
*/