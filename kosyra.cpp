#include <iostream>
#include <stack>
#include <string>
#include <cmath>

using namespace std;

double calculate(double a, double b, char op) {
    switch(op) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
        case '^':
            return pow(a, b);
        default:
            return 0;
    }
}

int main() {
    stack<double> s;
    string expr;
    getline(cin, expr);

    for (int i = 0; i < expr.length(); i++) {
        if (isdigit(expr[i])) {
            double num = 0;
            while (i < expr.length() && isdigit(expr[i])) {
                num = num * 10 + (expr[i] - '0');
                i++;
            }
            i--;
            s.push(num);
        } else if (expr[i] == '+' || expr[i] == '-' || expr[i] == '*' || expr[i] == '/' || expr[i] == '^')
