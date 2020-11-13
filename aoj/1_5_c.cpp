#include <iostream>
using namespace std;

int main() {
  int H, W;
  while (1) {
    cin >> H >> W;
    if (H == 0 && W == 0) {
      break;
    }
    string x;
    for (int i = 0; i < H; i++) {
      if (i % 2 == 0) {
        x = "#";
      } else {
        x = ".";
      }
      for (int j = 0; j < W; j++) {
        cout << x;
        if ((j + 1) % W == 0) {
          cout << endl;
        }
        if (x == "#") {
          x = ".";
        } else {
          x = "#";
        }
      }
    }
    cout << endl;
  }
}
