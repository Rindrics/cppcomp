#include <iostream>
using namespace std;

int main() {
  int num;
  int hour;
  int min;
  int sec;
  int mins_in_hour = 60;
  int secs_in_min = 60;
  cin >> num;

  hour = num / mins_in_hour / secs_in_min;
  num = num % (mins_in_hour * secs_in_min);
  min = num / mins_in_hour;
  sec = num % mins_in_hour;
  cout << hour << ":" << min << ":" << sec << endl;
}
