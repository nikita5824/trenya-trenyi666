#include <iostream>

using namespace std;

class Calculator
{
private:
    double operand1, operand2;

public:
    Calculator()
    {
        operand1 = 0;
        operand2 = 0;
    }

    double getOperand1()
    {
        return operand1;
    }

    void setOperand1(double operand)
    {
        operand1 = operand;
    }

    double getOperand2()
    {
        return operand2;
    }

    void setOperand2(double operand)
    {
        operand2 = operand;
    }

    double add()
    {
        return operand1 + operand2;
    }

    double subtract()
    {
        return operand1 - operand2;
    }

    double multiply()
    {
        return operand1 * operand2;
    }

    double divide()
    {
        if (operand2 != 0)
            return operand1 / operand2;
        else
            return 0;
    }
};

int main()
{
    Calculator calc;

    double operand1, operand2;

    cout << "Введите первый операнд: ";
    cin >> operand1;

    cout << "Введите второй операнд: ";
    cin >> operand2;

    calc.setOperand1(operand1);
    calc.setOperand2(operand2);

    cout << "Результат сложения: " << calc.add() << endl;
    cout << "Результат вычитания: " << calc.subtract() << endl;
   
