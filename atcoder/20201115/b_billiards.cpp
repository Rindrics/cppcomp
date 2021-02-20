#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
  int sx, sy, gx, gy;
  cin >> sx >> sy >> gx >> gy;
  double ans = (sx * gy + sy * gx) / (sy + gy);
  printf("%.10f", ans);
}
