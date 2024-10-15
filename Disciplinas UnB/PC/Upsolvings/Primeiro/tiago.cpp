#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
      int x;
      cin >> x;

      int a = 1, b = x - 1;
      /*
      Por que funciona?
      mdc de 1 e qualquer n = 1
      mmc de 1 e qualquer x - 1 = x - 1
      Logo, mmc(1, x - 1) + mdc(1, x - 1) = 1 + (x - 1) = x
      */

      cout << a << " " << b << "\n";
    }

    return 0;
}
