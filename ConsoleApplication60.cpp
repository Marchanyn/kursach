#include "Triangle.h"
#include <iostream>
using namespace std;

int main()
{
    Triangle x;
    int x1, x2, x3;
    setlocale(LC_ALL, "rus");
    cout << "Введите Стороны треугольника: ";
    cin >> x1;
    cin >> x2;
    cin >> x3;
    x.setX1(x1);
    x.setX2(x2);
    x.setX3(x3);
    cout << x.getx1() << endl;
    cout << x.getx2()<< endl;
    cout << x.getx3() << endl;
}

