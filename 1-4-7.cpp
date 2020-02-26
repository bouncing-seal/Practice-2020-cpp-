#include <iostream>

using namespace std;

int main() {
  int a, b, x, y;
  cin >> a >> b >> x >> y;   
  if ((a - x == 1 || a - x  == -1 || a - x  == 0) && (b - y == 1 || b - y == -1 || b - y == 0)) {
      cout << "YES"; 
  } else {
      cout << "NO";
  }
  return 0;
}
