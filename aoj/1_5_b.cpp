#include <iostream>
using namespace std;

int main() {
  while (1) {
    int W, H;
    cin >> H >> W;
    if (W == 0 & H == 0) {
      break;
    }
    for (int i = 0; i < H; i++) {
      for (int j = 0; j < W; j++) {
        if (j == 0 | j == W - 1) {
          cout << "#";
        } else {
          if (i == 0 | i == H - 1) {
            cout << "#";
          } else {
            cout << ".";
          }
        }
      }
      cout << endl;
    }
    cout << endl;
  }
}
