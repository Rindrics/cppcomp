#include <iostream>
#include <vector>
using namespace std;

int main() {
  int r, c;
  cin >> r >> c;
  vector <vector <int> > data (r + 1, vector <int> (c + 1));

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> data.at(i).at(j);
      data.at(i).at(c) += data.at(i).at(j);
      data.at(r).at(j) += data.at(i).at(j);
      data.at(r).at(c) += data.at(i).at(j);
    }
  }

  for (int i = 0; i <= r; i++) {
    for (int j = 0; j <= c; j++) {
      if (j == c) {
        cout << data.at(i).at(j) << endl;
      } else {
        cout << data.at(i).at(j) << " ";
      }
    }
  }
}
