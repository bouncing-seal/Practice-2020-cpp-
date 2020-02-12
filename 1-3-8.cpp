#include <iostream>

using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int pa, pb, pc;
  pa = (a + 2 - 1) / 2;
  pb = (b + 2 - 1) / 2;
  pc = (c + 2 - 1) / 2;
  cout << pa + pb + pc;
  return 0;
}
