#include "circlevector.h"
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    cout << "КРУГ." << endl;
    double rad;
    cout << "Введите радиус: ";
    cin >> rad;
    cout << endl;

    Circle R (rad);

    cout << R.Area() << endl;
    cout << R.Length() << endl;
    cout << endl;

    //_____________

    cout << "ВЕКТОР." << endl;

    int n;
    cout << "Введите количество векторов: ";
    cin >> n;
    Vector N (n);

    Vector vectr;
    Vector mass(n);

    for (int i = 0; i < n; i++) {
        cout << "Введите координаты x, y " << i+1 << "-ого вектора: ";
        cin >> vectr.x >> vectr.y;
        mass.setValue(i, vectr);
    }
    mass.PrintMassive(n);
    

}