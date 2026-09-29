// Lab_03_4.cpp
// Фащевський Богдан
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 28

#include <iostream>
using namespace std;

int main()
{
    double R; // вхідний параметр (радіус)
    double x; // вхідний аргумент (координата x)
    double y; // вхідний параметр (координата y)

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    // розгалуження в повній формі
    if ((x * x + y * y <= R * R && x >= 0) ||
        (y <= R && y >= -x && x <= 0) ||
        (y >= -R && y <= x && x <= 0))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    cin.get();
    return 0;
}