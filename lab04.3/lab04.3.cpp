// Завдання 4.3. Табуляція функції, заданої формулою:
// функція з параметрами. Варіант 18
//
//     | a*x^2 - b*x^2,        x < 0 і b != 0
// F = | (x - a) / (x - c),    x > 0 і b == 0
//     | (x + 5) / (c*(x - 10)), в інших випадках

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;     // параметри функції (дійсні числа)
    double xp, xk, dx;  // початок, кінець інтервалу та крок табуляції
    double x;           // поточне значення аргументу
    double F;           // значення функції

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    // шапка таблиці
    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << "     |"
        << setw(7) << "F" << "       |" << endl;
    cout << "---------------------------" << endl;

    // табуляція функції
    x = xp;
    while (x <= xk)
    {
        if (x < 0 && b != 0)
            F = a * x * x - b * x * x;
        else
            if (x > 0 && b == 0)
                F = (x - a) / (x - c);
            else
                F = (x + 5) / (c * (x - 10));

        cout << "|" << setw(7) << setprecision(2) << x
            << "   |" << setw(10) << setprecision(3) << F
            << "    |" << endl;

        x += dx;
    }
    cout << "---------------------------" << endl;

    return 0;
}
