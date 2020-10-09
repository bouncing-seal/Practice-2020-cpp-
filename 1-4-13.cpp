#include <iostream>
using namespace std;
int main() {
    int a, b, c, one, two, three;
    cin >> a >> b >> c;
    if (a > b) {
        if (a > c) {
            three = a;
            if (b > c) {
                two = b;
                one = c;
            } else {
                two = c;
                one = b;
            }
        } else {
            one = b;
            two = a;
            three = c;    
        }
    } else if (a > c) {
        one = c;
        two = a;
        three = b;
    } else {
        one = a;
        if (b > c) {
            three = b;
            two = c;
        } else {
            three = c;
            two = b;  
        }
    }
    cout << one << " " << two << " " << three;
  return 0;
}
