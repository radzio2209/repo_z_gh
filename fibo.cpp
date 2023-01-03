#include <iostream>

using namespace std;

long int  fibonacci(int n) {
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  } else {
    return fibonacci(n-1) + fibonacci(n-2);
  }
}

int main() {
  int n=-1;
  while(n<0){
  cout << "Podaj n-ty wyraz ciągu Fibonacciego, który chcesz obliczyć(n>=0): ";
  cin >> n;
  }
  cout << "Wyraz o indeksie " << n << " w ciągu Fibonacciego to " << fibonacci(n) << endl;
  cout << "Informacje dodatkowe:\n FibCalc\n Radoslaw Danielkiewicz\n I2S 2.2\n";

  return 0;
}
