#include <iostream>

using namespace std;

int main() {
  int V, T, km;
  cin >> V >> T;
  km = V * T % 109;
  cout << (km + 109) % 109;
  return 0;
}
