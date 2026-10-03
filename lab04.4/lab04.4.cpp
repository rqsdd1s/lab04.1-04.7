// Завдання 4.4. Табуляція функції, заданої графіком. Варіант 18
//
// Функція складається з п'яти ділянок:
//   x <= -2R1      : відрізок прямої через точки (-1-2R1; R1) і (-2R1; 0)
//   -2R1 < x <= 0  : верхнє півколо радіуса R1 з центром (-R1; 0)
//   0 < x < 2R2    : нижнє півколо радіуса R2 з центром (R2; 0)
//   2R2 <= x <= 6  : відрізок прямої через точки (2R2; 0) і (6; -1)
//   x > 6          : пряма y = -1

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double R1, R2;      // радіуси півкіл
    double xp, xk, dx;  // початок, кінець інтервалу та крок табуляції
    double x;           // поточне значення аргументу
    double y;           // значення функції

    cout << "R1 = "; cin >> R1;
    cout << "R2 = "; cin >> R2;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    // заголовок і шапка таблиці
    cout << fixed;
    cout << endl << "     Values of function y(x)" << endl;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << "     |"
        << setw(7) << "y" << "       |" << endl;
    cout << "---------------------------" << endl;

    // табуляція функції
    x = xp;
    while (x <= xk)
    {
        if (x <= -2 * R1)  // відрізок прямої
            y = R1 * (-2 * R1 - x);
        else
            if (x <= 0)  // верхнє півколо
                y = sqrt(R1 * R1 - (x + R1) * (x + R1));
            else
                if (x < 2 * R2)  // нижнє півколо
                    y = -sqrt(R2 * R2 - (x - R2) * (x - R2));
                else
                    if (x <= 6)  // відрізок прямої
                        y = (2 * R2 - x) / (6 - 2 * R2);
                    else  // пряма y = -1
                        y = -1;

        cout << "|" << setw(7) << setprecision(2) << x
            << "   |" << setw(10) << setprecision(3) << y
            << "    |" << endl;

        x += dx;
    }
    cout << "---------------------------" << endl;

    return 0;
}
