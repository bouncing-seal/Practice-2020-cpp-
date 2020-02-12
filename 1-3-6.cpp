#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;
  cout << (N / 100) + (N % 100) / 10 + (N % 10);
  return 0;
}
