#include "circlevector.h"
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    cout << "����." << endl;
    double rad;
    cout << "������� ������: ";
    cin >> rad;
    cout << endl;

    Circle R (rad);

    cout << R.Area() << endl;
    cout << R.Length() << endl;
    cout << endl;

    //_____________

    cout << "������." << endl;

    int n;
    cout << "������� ���������� ��������: ";
    cin >> n;
    Vector N (n);

    Vector vectr;
    Vector mass(n);

    for (int i = 0; i < n; i++) {
        cout << "������� ���������� x, y " << i+1 << "-��� �������: ";
        cin >> vectr.x >> vectr.y;
        mass.setValue(i, vectr);
    }
    mass.PrintMassive(n);
    

}