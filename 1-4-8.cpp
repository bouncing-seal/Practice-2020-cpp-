#include <iostream>

using namespace std;

int main() {
  int a, b, x, y;
  cin >> a >> b >> x >> y;   
  if ((a - x == b - y) || (a - x == y - b)) {
      cout << "YES"; 
  } else {
      cout << "NO";
  }
  return 0;
}
