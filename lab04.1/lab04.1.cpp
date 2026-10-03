// Завдання 4.1. Цикли. Варіант 18
// Обчислення суми cos(i) / (1 + sin^2(i)) для i від k до 15
// чотирма способами: while, do...while, for (i++), for (i--)

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const int N = 15;   // верхня межа суми (фіксована умовою варіанту)
    int k;              // нижня межа суми (вводиться з клавіатури)
    int i;              // параметр циклу (номер доданка)
    double S;           // сума

    cout << "k = "; cin >> k;

    // 1) цикл з передумовою while
    S = 0;
    i = k;
    while (i <= N)
    {
        S += cos(1. * i) / (1 + sin(1. * i) * sin(1. * i));
        i++;
    }
    cout << S << endl;

    // 2) цикл з післяумовою do...while
    S = 0;
    i = k;
    do
    {
        S += cos(1. * i) / (1 + sin(1. * i) * sin(1. * i));
        i++;
    } while (i <= N);
    cout << S << endl;

    // 3) цикл for з інкрементом параметра (від k до N)
    S = 0;
    for (i = k; i <= N; i++)
    {
        S += cos(1. * i) / (1 + sin(1. * i) * sin(1. * i));
    }
    cout << S << endl;

    // 4) цикл for з декрементом параметра (від N до k)
    S = 0;
    for (i = N; i >= k; i--)
    {
        S += cos(1. * i) / (1 + sin(1. * i) * sin(1. * i));
    }
    cout << S << endl;

    return 0;
}