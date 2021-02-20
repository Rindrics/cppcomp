#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))

int main() {
  long N;
  int K;
  string g1, g2;
  cin >> N >> K;


  for (int i = 0; i < K; i++) {
    if (N == 0) {
      break;
    }
    // cout << "i: " << i << endl;
    int keta = 0;
    int N2 = N;
    while (N2 > 0) {
      N2 = N2 / 10;
      keta ++;
    }
    char arr[keta];
    for (int i = 0; i < keta; i++) {
      arr[i] = to_string(N)[i];
    }
  
    sort(arr, arr + SIZE_OF_ARRAY(arr));
    std::string foo(arr, keta);
    g2 = arr;
    // cout << "g2: " << stoi(g2) << endl;
  
    char arr2[keta];
    for (int i = 0; i < keta; i++) {
      arr2[i] = arr[keta - 1 - i];
    }
    std::string bar(arr2, keta);
    g1 = arr2;
    // cout << "g1: " << stoi(g1) << endl;

    N = stoi(g1) - stoi(g2);
    // cout << "N: " << N << endl;
    // cout << "---" << endl;
  }
  cout << N << endl;
}
