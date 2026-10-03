// Завдання 4.5. «Попадання» у плоску фігуру. Варіант 18
//
// Область складається з двох частин:
//  - частина кола радіуса R з центром (R; R) нижче прямої y = x;
//  - частина кола радіуса R з центром (-R; -R) вище прямої y = x.
// 2 спосіб: інтервал x, y з [-2R; 2R].

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    double R;       // радіус кіл (параметр області)
    double x, y;    // координати точки ("пострілу")

    cout << "R = "; cin >> R;

    // ініціалізація генератора випадкових чисел
    srand((unsigned)time(NULL));

    // 1 спосіб: 10 пострілів, координати вводяться з клавіатури
    for (int i = 0; i < 10; i++)
    {
        cout << "x = "; cin >> x;
        cout << "y = "; cin >> y;

        if (((x - R) * (x - R) + (y - R) * (y - R) <= R * R && y <= x) ||
            ((x + R) * (x + R) + (y + R) * (y + R) <= R * R && y >= x))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    cout << endl << fixed;

    // 2 спосіб: 10 пострілів, випадкові координати з [-2R; 2R]
    for (int i = 0; i < 10; i++)
    {
        x = 4 * R * rand() / RAND_MAX - 2 * R;
        y = 4 * R * rand() / RAND_MAX - 2 * R;

        if (((x - R) * (x - R) + (y - R) * (y - R) <= R * R && y <= x) ||
            ((x + R) * (x + R) + (y + R) * (y + R) <= R * R && y >= x))
            cout << setw(8) << setprecision(4) << x << "    "
            << setw(8) << setprecision(4) << y << "    "
            << "yes" << endl;
        else
            cout << setw(8) << setprecision(4) << x << "    "
            << setw(8) << setprecision(4) << y << "    "
            << "no" << endl;
    }

    return 0;
}
