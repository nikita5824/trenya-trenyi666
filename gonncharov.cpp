#include <iostream>
using namespace std;

int main() {
  int n, sum = 0;
  cout << "Enter the number of terms: ";
  cin >> n;
  
  for(int i = 1; i <= n; i++) {
    sum += i;
  }
  
  cout << "The sum of the series is " << sum << endl;
  return 0;
}

int func() {
  int n, fact = 1;
  cout << "Enter a positive integer: ";
  cin >> n;

  for(int i = 1; i <= n; i++) {
    fact *= i;
  }

  cout << "Factorial of " << n << " is " << fact << endl;
  return 0;
}

