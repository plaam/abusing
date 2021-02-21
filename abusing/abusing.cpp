#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int recursion(int n) {
    if (n / 1 == 2) {
        cout << "Да, число является степенью 2" << endl;
    }
    else if (n % 2 == 0) {
        if (n > 2) {
            return recursion(n / 2);
        }
    }
    else if (n / 1 != 2) {
        cout << "Нет, число не является степенью 2" << endl;
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n, temp;

    cout << "Введите число для проверки, является ли оно степенью 2: ";
    cin >> n;

    recursion(n);

    return 0;
}