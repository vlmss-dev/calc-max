#include <iostream>

int calc_max() {
  int obj[10] = { 0, 3, 6, 8, 5, 4, 2, 11, 10, 1 };
  int max = 0;

  for(int i = 0;i < 10; i++) {
    if(obj[i] > obj[max]) {
      max = i;
    }

    std::cout << i << " " << max << " " << obj[max] << std::endl;
  }

  std::cout << obj[max];

  return 0;
}

int main() {
  calc_max();
  return 0;
}
