// Игра Guess my number
// Классическая игра в угадывание чисел
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  srand(static_cast<unsigned int>(time(0)));
  const unsigned int secretNumber = rand() % 100 + 1;
  unsigned short tries = 0;
  unsigned short guess;

  cout << "Игра \"Угадай число!\"" << endl << endl;

  do
  {
    cout << "Введите ваше число: ";
    cin >> guess;
    tries++;
    if (guess > secretNumber)
    {
      cout << "Попробуйте число поменьше." << endl << endl;
    }
    if (guess < secretNumber)
    {
      cout << "Попробуйте число побольше." << endl << endl;
    }
  } while (guess != secretNumber);

  cout << endl << "Поздравляю! Вы угадали число " << secretNumber << " за " << tries << " попыток." << endl;
}