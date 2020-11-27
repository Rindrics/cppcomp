#include <iostream>
#include <string>
using namespace std;

int main() {
  int n_cards;
  cin >> n_cards;
  int taro=0, hanako=0;
  for (int i = 0; i < n_cards; i++) {
    string card_taro, card_hanako;
    cin >> card_taro >> card_hanako;
    if (card_taro > card_hanako) {
      taro += 3;
    } else if (card_hanako > card_taro) {
      hanako += 3;
    } else {
      taro += 1;
      hanako += 1;
    }
  }
  cout << taro << " " << hanako << endl;
}
