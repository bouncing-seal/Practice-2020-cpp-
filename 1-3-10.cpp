#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;
  int h, m1, m2, s1, s2;
  h = (N / 3600) % 24;
  m1 = ( (N / 60) % 60) / 10;
  m2 = ( (N / 60) % 60) % 10;
  s1 = (N % 60) / 10;
  s2 = (N % 60) % 10;
  cout << h << ':' << m1 << m2 << ':' << s1 << s2;
  return 0;
}
