#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
  double pi = 2 * acos(0.0);
  int a, b, C;
  cin >> a >> b >> C;
  double Cdeg = C * pi / 180;
  double S = a * b * sin(Cdeg) / 2;
  double c = sqrt(a * a - 2 * a * b * cos(Cdeg) + b * b);
  double L = a + b + c;
  double h = b * sin(Cdeg);
  printf("%.5f\n", S);
  printf("%.5f\n", L);
  printf("%.5f\n", h);
}
