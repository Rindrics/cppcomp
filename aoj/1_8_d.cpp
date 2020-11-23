#include <iostream>
#include <string>
using namespace std;

int main() {
  string p, s;
  cin >> p >> s;
  string pp = p + p;
  if (pp.find(s) == std::string::npos) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
}
