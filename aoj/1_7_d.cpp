#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m, l;
  cin >> n >> m >> l;
  vector <vector <int> > A (n, vector <int> (m));
  vector <vector <int> > B (m, vector <int> (l));
  vector <vector <unsigned long> > C (n, vector <unsigned long> (l));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> A.at(i).at(j);
    }
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < l; j++) {
      cin >> B.at(i).at(j);
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < l; j++) {
      for (int k = 0; k < m; k++) {
        C.at(i).at(j) += A.at(i).at(k) * B.at(k).at(j);
      }
      if (j == l - 1) {
        cout << C.at(i).at(j) << endl;
      } else {
        cout << C.at(i).at(j) << " ";
      }
    }
  }
}
