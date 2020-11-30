#include <iostream>
#include <vector>
#include <numeric>
#include <math.h>
#include <stdio.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int i;
  while (n != 0) {
    vector <int> s(n);
    for (i = 0; i < n; i++) {
      cin >> s.at(i);
    }
    double mean = accumulate(s.begin(), s.end(), 0.0) / s.size();
    double var = 0;
    for (i = 0; i < n; i++) {
      double deviance = s.at(i) - mean;
      var += deviance * deviance;
    }
    var = var / s.size();
    printf("%.6f\n", sqrt(var));
    cin >> n;
  }
}
