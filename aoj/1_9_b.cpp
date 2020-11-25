#include <iostream>
#include <string>
using namespace std;

int main() {
  string cards;
  cin >> cards;
  while (cards != "-") {
    int m;
    cin >> m;
    int h;
    for (int i = 0; i < m; i++) {
      cin >> h;
      string taken = cards.substr(0, h);
      string remained = cards.substr(h);
      cards = remained + taken;
    }
    cout << cards << endl;
    cin >> cards;
  }
}
