#include <iostream>
using namespace std;

int main() {
  double num1, num2;
  char op;
  cout << "Enter first number, operator, second number: ";
  cin >> num1 >> op >> num2;

  switch(op) {
    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
      break;
    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
      break;
    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
      break;
    case '/':
      if(num2 == 0) {
        cout << "Error: division by zero" << endl;
      }
      else {
        cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
      }
      break;
    default:
      cout << "Error: invalid operator" << endl;
      break;
  }
  return 0;
}
