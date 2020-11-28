#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
  double x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;

  double xdiff = x2 - x1;
  double ydiff = y2 - y1;

  printf("%.7f\n" ,sqrt(xdiff * xdiff + ydiff * ydiff));
}
