#include "circlevector.h"
#include <iostream>
using namespace std;

int main()
{
    cout << "CIRCLE." << endl;
    double rad;
    cout << "Enter radius: ";
    cin >> rad;
    cout << endl;

    Circle R (rad);

    cout << "Area = " << R.Area() << endl;
    cout << "Lenght = " << R.Length() << endl;
    cout << endl;

    //_____________

    cout << "VECTOR." << endl;

    int n, coordx, coordy;
    cout << "Enter number of vectors: ";
    cin >> n;

    Vector vectr;
    Vector* mass = new Vector[n];

    for (int i = 0; i < n; i++) 
    {
        cout << "Enter x coordinate of the " << i+1 << " vector: ";
        cin >> coordx;
        vectr.setValueX(coordx);

        cout << "Enter y coordinate of the " << i+1 << " vector: ";
        cin >> coordy;
        vectr.setValueY(coordy);

        mass[i] = vectr;
    }

    for (int i = 0; i < n; i++) 
    {
        cout << "Length: " << mass[i].LengthV() << endl;
        cout << endl;
    }

    delete[]mass;
}