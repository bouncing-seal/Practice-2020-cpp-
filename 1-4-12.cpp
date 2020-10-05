#include <iostream>

using namespace std;

int main() {
    int n, m, x, y, dlin, korot, path_x, path_y;
    cin >> n >> m >> x >> y;
//Проверяем, какая сторона длиннее
  if (n > m) {
      dlin = n;
      korot = m;
  } else {
      dlin = m;
      korot = n;
  }
//Находим кратчайшее расстояние до длинного бортика
  if (x < (dlin - x)) {
      path_x = x;
  } else {
      path_x = dlin - x;
  }
//Находим кратчайшее расстояние до короткого бортика
  if (y < (korot - y)) {
      path_y = y;
  } else {
      path_y = korot - y;
  }
//Сравниваем кратчайшие расстояния до короткого и
//длинного бортиков
  if (path_x < path_y) {
      cout << path_x;
  } else {
      cout << path_y;
  }
  return 0;
}
