#include "circlevector.h"
#include <iostream>

using namespace std;

double Circle::Area() {
	return (2 * 3.1415 * GetRad());
};

double Circle::Length() {
    return 3.1415 * GetRad();
};

void Vector::PrintMassive(int n) {
	for (int i = 0; i < n; i++) {
		cout << "(" << this->coord_array[i].x << ", " << this->coord_array[i].y << ")" << endl;
	}
}

double Vector::Length() {

}