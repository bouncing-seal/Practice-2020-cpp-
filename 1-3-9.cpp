#include <iostream>

using namespace std;

int main() {
  int A, B, N;
  cin >> A >> B >> N;
  int finA, finB;
  finB = B * N;
  finA = A * N + finB / 100;
  cout << finA <<' ' << (finB % 100);
  return 0;
}
