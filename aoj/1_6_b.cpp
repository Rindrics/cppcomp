#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> spade(13, 0);
  vector<int> heart(13, 0);
  vector<int> club(13, 0);
  vector<int> diamond(13, 0);

  int cardn;
  cin >> cardn;
  for (int i = 0; i < cardn; i++) {
    string suite;
    int num;
    cin >> suite >> num;
    if (suite == "S") {
      spade.at(num - 1) = num;
    }
    if (suite == "H") {
      heart.at(num - 1) = num;
    }
    if (suite == "C") {
      club.at(num - 1) = num;
    }
    if (suite == "D") {
      diamond.at(num - 1) = num;
    }
  }
  for (int i = 0; i < 13; i++) {
    if (spade.at(i) == 0) {
      cout << "S " << i + 1 << endl;
    }
  }
  for (int i = 0; i < 13; i++) {
    if (heart.at(i) == 0) {
      cout << "H " << i + 1 << endl;
    }
  }
  for (int i = 0; i < 13; i++) {
    if (club.at(i) == 0) {
      cout << "C " << i + 1 << endl;
    }
  }
  for (int i = 0; i < 13; i++) {
    if (diamond.at(i) == 0) {
      cout << "D " << i + 1 << endl;
    }
  }
}
