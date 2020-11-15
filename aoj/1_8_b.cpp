#include <iostream>
#include <string>
using namespace std;

int main() {
  while (1){
    string s;
    cin >> s;
    if (s == "0") {
      break;
    }
    // vector <int> num (s.size);
    int sum = 0;
    for (int i = 0; i < s.size(); i++) {
      sum += s[i] - '0';
    }
    cout << sum << endl;
  }
}
