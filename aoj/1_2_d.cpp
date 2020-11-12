#include <iostream>
using namespace std;

int main() {
  int W, H, x, y, r;
  cin >> W >> H >> x >> y >> r;
  bool l_ok, r_ok, t_ok, b_ok;
  l_ok = x - r >= 0;
  r_ok = W - (x + r) >= 0;
  t_ok = H - (y + r) >= 0;
  b_ok = y - r >= 0;
  if (l_ok && r_ok && t_ok && b_ok) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
