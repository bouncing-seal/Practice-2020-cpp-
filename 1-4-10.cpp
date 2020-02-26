#include <iostream>

using namespace std;

int main() {
  int a, b, x, y;
  cin >> a >> b >> x >> y;   
  if (((a - x == 1 || x - a == 1) && (b - y == 2 || y - b == 2)) ||
      ((a - x == 2 || x - a == 2) && (b - y == 1 || y - b == 1))) {
      cout << "YES"; 
  } else {
      cout << "NO";
  }
  return 0;
}
