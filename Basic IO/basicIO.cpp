#include<iostream>

int sum (int x, int y) {
  return x + y;
}

int main () {
  int a, b;
  std::cin >> a >> b;
  int total = sum(a, b);
  std::cout << total << std::endl;
  std::cout << "Hey Rishabh!";
}