#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int max = -1000000;
  int min = 1000000;
  long int sum = 0;
  for (int i = 0; i < n; i++) {
    int d;
    cin >> d;
    if (d > max) {
      max = d;
    }
    if (d < min) {
      min = d;
    }
    sum += d;
  }
  printf("%d %d %ld\n", min, max, sum);
}
