#include <iostream>
#include <vector>
#include <numeric>

using namespace std;


void printVector(const vector<int>& vec) {
  for (int i = 0; i < vec.size(); i++) {
    cout << vec.at(i) << " ";
  }
    cout << endl;
}

int calcCost(const vector<int>& vec, const vector <vector <int> > costs) {
  int sum = 0;
  for (int i = 1; i < vec.size(); i++) {
    sum += costs.at(vec.at(i - 1)).at(vec.at(i));
  }
  sum += costs.at(vec.at(vec.size() - 1)).at(vec.at(0));
  return sum;
}


int main() {

  int n, k;
  cin >> n >> k;
  vector <int> routes(n);
  vector <vector <int > > cost(n, vector <int> (n));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> cost.at(i).at(j);
    }
  }
  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j < n; j++) {
  //     cout << cost.at(i).at(j) << " ";
  //   }
  //   cout << endl;
  // }
  iota(routes.begin(), routes.end(), 0);
  

  int cnt = 0;
  do {
    int sum = 0;
    sum = calcCost(routes, cost);
    // printVector(routes);
    // cout << sum << endl;
    if (routes[0] == 0 && sum == k) {
      cnt++;
    }
  } while (next_permutation(routes.begin(), routes.end()));

  cout << cnt << endl;

  // return 0;
}
