#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>

using namespace std;

int main() {
  string s;
  vector <int> data(26, 0);
  for (int i = 0; i < 1200; i++) {
    s[i] = getchar();
    s[i] = tolower(s[i]);
    bool is_alpha = s[i] >= 97 && s[i] <= 122;
    if (is_alpha) {
     data.at(s[i] - 97) += 1;
    }
  }
  for (int i = 0; i < 26; i++) {
    printf("%c : ", i + 97);
    cout << data.at(i) << endl;
  }
}
