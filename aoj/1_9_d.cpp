#include <iostream>
#include <string>
using namespace std;

int main() {
  string str;
  cin >> str;
  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    string cmd;
    int a, b;
    cin >> cmd >> a >> b;
    if (cmd == "replace") {
      string p;
      cin >> p;
      str = str.replace(a, b - a + 1, p);
    }
    if (cmd == "reverse") {
      string tmp = str;
      for (int j = a; j <= b; j++) {
        str[j] = tmp[b - j + a];
      }
    }
    if (cmd == "print") {
      for (int j = a; j <= b; j++) {
        cout << str[j];
      }
      cout << endl;
    }
  }
}
