// Завдання 4.6. Вкладені цикли. Варіант 18
//
//       3   4-i   sin(i*k^2) + cos(k*i^2)
// P = PROD  PROD  -----------------------
//      i=1  k=1          k^2 + i^2
//
// Обчислення чотирма способами: while, do...while, for (++), for (--)

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double P;   // добуток
    int i, k;   // параметри зовнішнього та внутрішнього циклів

    // 1) вкладені цикли while
    P = 1;
    i = 1;
    while (i <= 3)
    {
        k = 1;
        while (k <= 4 - i)
        {
            P *= (sin(1. * i * k * k) + cos(1. * k * i * i))
                / (k * k + i * i);
            k++;
        }
        i++;
    }
    cout << P << endl;

    // 2) вкладені цикли do...while
    P = 1;
    i = 1;
    do
    {
        k = 1;
        do
        {
            P *= (sin(1. * i * k * k) + cos(1. * k * i * i))
                / (k * k + i * i);
            k++;
        } while (k <= 4 - i);
        i++;
    } while (i <= 3);
    cout << P << endl;

    // 3) вкладені цикли for з інкрементом параметрів
    P = 1;
    for (i = 1; i <= 3; i++)
    {
        for (k = 1; k <= 4 - i; k++)
        {
            P *= (sin(1. * i * k * k) + cos(1. * k * i * i))
                / (k * k + i * i);
        }
    }
    cout << P << endl;

    // 4) вкладені цикли for з декрементом параметрів
    P = 1;
    for (i = 3; i >= 1; i--)
    {
        for (k = 4 - i; k >= 1; k--)
        {
            P *= (sin(1. * i * k * k) + cos(1. * k * i * i))
                / (k * k + i * i);
        }
    }
    cout << P << endl;

    return 0;
}
