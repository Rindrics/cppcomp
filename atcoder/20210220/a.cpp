#include <iostream>
using namespace std;

int main() {
  int i, n, x;
  cin >> x;

  for (i = 1; i < 10000; i++) {
    n = i * 100;
    if (x < n) {
      cout <<  n - x << endl;
      break;
    }
  }
}
