#include <iostream>
using namespace std;

int main() {
  int a;
  int b;
  string mark;
  cin >> a >> b;
  if (a == b) {
    mark = " == ";
  } else if (a > b) {
    mark = " > ";
  } else {
    mark = " < ";
  }
  cout << "a" << mark << "b" << endl;
}
