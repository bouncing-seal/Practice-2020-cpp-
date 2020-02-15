#include <iostream>

using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  bool ApBgtC = A + B > C, ApCgtB = A + C > B, BpCgtA = B + C > A;
  if (ApBgtC && ApCgtB && BpCgtA) {
      cout << "YES";
  } else {
      cout << "NO";
  }
  return 0;
}
