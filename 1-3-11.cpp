#include <iostream>

using namespace std;

int main() {
  int a, b, c, x, y, z;
  cin >> a >> b >> c >> x >> y >> z;
  cout << (x * 3600 + y * 60 + z) - (a * 3600 + b * 60 + c);
  return 0;
}
