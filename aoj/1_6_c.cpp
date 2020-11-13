#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector <vector <vector <int> > > bfrv(4, vector <vector <int> > (3, vector <int> (10)));
    vector<double> x(3,3.14);
  int n;
  int b, f, r, v;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> b >> f >> r >> v;
    bfrv.at(b - 1).at(f - 1).at(r - 1) += v;
  }
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 10; k++) {
        cout << " " << bfrv.at(i).at(j).at(k);
      }
      cout << endl;
      if (i != 3 && j == 2) {
        cout << "####################" << endl;
      }
    }
  }
}
