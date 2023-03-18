#include <iostream>
using namespace std;

// Функция для конвертации рублей в доллары
double rubleToDollar(double ruble, double rate) {
    return ruble / rate;
}

// Функция для конвертации долларов в рубли
double dollarToRuble(double dollar, double rate) {
    return dollar * rate;
}

int main() {
    double rate, amount;
    int choice;

    cout << "Enter the current exchange rate: ";
    cin >> rate;

    cout << "Enter the amount to convert: ";
    cin >> amount;

    cout << "Choose an option:\n";
    cout << "1. Ruble to dollar\n";
    cout << "2. Dollar to ruble\n";
    cin >> choice;

    switch(choice) {
        case 1: {
            double dollar = rubleToDollar(amount, rate);
            cout << amount << " rubles = " << dollar << " dollars";
            break;
        }
        case 2: {
            double ruble = dollarToRuble(amount, rate);
            cout << amount << " dollars = " << ruble << " rubles";
            break;
        }
        default: {
            cout << "Invalid choice";
            break;
        }
    }

    return 0;
}
