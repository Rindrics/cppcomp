#include <cmath>
#include <iostream>
#include <vector>
#include <stdio.h>
#include <math.h>
using namespace std;

double mincofsky_dist(float p, vector<int>x, vector<int>y) {
  double sum = 0;
  if (isinf(p)) {
    double max = 0.0;
    for (int i = 0; i < x.size(); i++) {
      double abs_diff = abs(x.at(i) - y.at(i));
      if (abs_diff > max) {
        max = abs_diff;
      }
    }
    return max;
  } else {
    for (int i = 0; i < x.size(); i++) {
      sum += (double) pow(abs(x.at(i) - y.at(i)), p);
    }
    return (double) pow(sum, (double) 1 / p);
  }
}

int main() {
  int n, i;
  cin >> n;
  vector<int> x(n);
  vector<int> y(n);
  for (i = 0; i < n; i++) {
    cin >> x.at(i);
  }
  for (i = 0; i < n; i++) {
    cin >> y.at(i);
  }

  float inf = 1.0 / 0.0;
  printf("%.7f\n", mincofsky_dist(1, x, y));
  printf("%.7f\n", mincofsky_dist(2, x, y));
  printf("%.7f\n", mincofsky_dist(3, x, y));
  printf("%.7f\n", mincofsky_dist(inf, x, y));
}
