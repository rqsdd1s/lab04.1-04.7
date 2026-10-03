// Завдання 4.2. Табуляція функції, заданої формулою:
// функція однієї змінної. Варіант 18
//
//                  | e^(0.4 + x),           x <= -1
// y = 13.5 - 2x -  | 1 - sin^2(x),     -1 < x < 1
//                  | cos(x) / (1 + sin^2(x)), x >= 1

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double xp, xk, dx;  // початок, кінець інтервалу та крок табуляції
    double x;           // поточне значення аргументу
    double A, B;        // доданки: A = 13.5 - 2x, B - кускова частина
    double y;           // значення функції

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    // шапка таблиці
    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << "     |"
        << setw(7) << "y" << "       |" << endl;
    cout << "---------------------------" << endl;

    // табуляція функції
    x = xp;
    while (x <= xk)
    {
        A = 13.5 - 2 * x;

        if (x <= -1)
            B = exp(0.4 + x);
        else
            if (x < 1)
                B = 1 - sin(x) * sin(x);
            else
                B = cos(x) / (1 + sin(x) * sin(x));

        y = A - B;

        cout << "|" << setw(7) << setprecision(2) << x
            << "   |" << setw(10) << setprecision(3) << y
            << "    |" << endl;

        x += dx;
    }
    cout << "---------------------------" << endl;

    return 0;
}
