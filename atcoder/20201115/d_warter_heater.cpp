#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
  int n, w;
  cin >> n >> w;
  vector <vector <int> > demand (n, vector <int> (3));
  int end = 0;
  for (int i = 0; i < n; i++) {
    cin >> demand.at(i).at(0) >> demand.at(i).at(1) >> demand.at(i).at(2);
    if (demand.at(i).at(1) > end) {
      end = demand.at(i).at(1);
    }
  }
  string msg = "Yes";
  vector <int> times (end);
  for (int i = 0; i < n; i++) {
    for (int t = demand.at(i).at(0); t < demand.at(i).at(1); t++) {
      times.at(t) += demand.at(i).at(2);
    }
    if (times.at(i) > w) {
      msg = "No";
    }
  }
  cout << msg << endl;
}
