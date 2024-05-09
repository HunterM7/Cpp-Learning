#include <iostream>

int main() {
  setlocale(LC_ALL, "RU");

  srand(time(NULL));
  int random = 1 + rand() % 128;
  std::cout << "Random number: " << random;
}