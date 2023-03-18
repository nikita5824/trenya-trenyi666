#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int num, base, new_base;
    cout << "Введите число: ";
    cin >> num;
    cout << "Введите систему счисления числа: ";
    cin >> base;
    cout << "Введите новую систему счисления: ";
    cin >> new_base;

    string new_num = "";
    while (num > 0) {
        int digit = num % new_base;
        if (digit < 10) {
            new_num = to_string(digit) + new_num;
        } else {
            new_num = (char)('A' + digit - 10) + new_num;
        }
        num /= new_base;
    }
    cout << "Число " << num << " в " << base << "-й системе счисления равно " << new_num << " в " << new_base << "-й системе счисления." << endl;

    return 0;
}
