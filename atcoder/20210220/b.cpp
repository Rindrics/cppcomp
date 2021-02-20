#include <iostream>
using namespace std;

int main() {
  string S;
  int i;
  bool exit = false;
  cin >> S;
  for (i = 0; i < 1000; i++) {
    if (i >= S.length()) {
      break;
    }
    if (i % 2 == 0) {
      if (islower(S[i])) {
      } else {
        cout << "No" << endl;
        exit = true;
        break;
      }
    } else {
      if (isupper(S[i])) {
      } else {
        cout << "No" << endl;
        exit = true;
        break;
      }
    }
  }
  if (exit == false) {
    cout << "Yes" << endl;
  }
}
