#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 3000; i++) {
    int x, y;
    cin >> x >> y;
    if (x == 0 && y == 0) {
      break;
    } else {
      if (x > y) {
          std::swap(x, y);
      }
      cout << x << " " << y << endl;
    }
  }
}
