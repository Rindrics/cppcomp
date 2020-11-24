#include<iostream>
#include<string>
using namespace std;
int main(){
  string W;
  cin >> W;

  string T;
  cin >> T;

  int count = 0;
  while(T != "END_OF_TEXT"){
  
    for(int i=0; i < T.size(); i++) {
      if('A' <= T[i] && T[i] <= 'Z') T[i] = tolower(T[i]);
    }
    if(W == T) count++;
    cin >> T;
  }
  cout << count << endl;
}
