#include <iostream>
using namespace std;

bool isPrime(int n) {
  if(n <= 1) {
    return false;
  }
  
  for(int i = 2; i <= n/2; i++) {
    if(n % i == 0) {
      return false;
    }
  }
  
  return true;
}
//��������� � ���� 1
int main() {
  int n;
  cout << "Enter a positive integer: ";
  cin >> n;

  if(isPrime(n)) {
    cout << n << " is a prime number" << endl;
  }
  else {
    cout << n << " is not a prime number" << endl;
  }
  return 0;
}
