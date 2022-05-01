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

    cout << R.Area() << endl;
    cout << R.Length() << endl;
    cout << endl;

    //_____________

    cout << "VECTOR." << endl;

    int n;
    cout << "Enter number of vectors: ";
    cin >> n;

    Vector N (n);
    Vector vectr;
    Vector mass(n);

    for (int i = 0; i < n; i++) {
        cout << "Enter x, y coordinates of the " << i+1 << " vector: ";
        cin >> vectr.x >> vectr.y;
        mass.setValue(i, vectr);
    }
    for (int i = 0; i < n; i++) {
        mass.PrintMassive(i);
        cout << "Length: " << mass.Length(i) << endl;
        cout << endl;
    }

}