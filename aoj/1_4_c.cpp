#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main() {
  while (1) {
    int a, b;
    string op;
    cin >> a >> op >> b;
    if (op == "?") {
      break;
    }
    int ans;
    if (op == "+") {
      ans = a + b;
    } else if (op == "-") {
      ans = a - b;
    } else if (op == "*") {
      ans = a * b;
    } else if (op == "/") {
      ans = a / b;
    }
    printf("%d\n", ans);
  }
}
