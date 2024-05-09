// Игра Guess my number 2.0
// Игра в которой вы загадываете число, а компьютер пытается его угадать
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  unsigned short userNumber;
  unsigned short computerNumber;
  unsigned short tries = 0;

  cout << "Загадайте число от 1 до 100: ";
  cin >> userNumber;

  while (userNumber < 1 || userNumber > 100) {
    cout << endl << "Вы ввели недопустимое число." << endl;
    cout << "Попробуйте загадать число от 1 до 100: ";
    cin >> userNumber;
  }

  unsigned short highNumber = 100;
  unsigned short lowNumber = 1;

  srand(static_cast<unsigned int>(time(0)));

  while (computerNumber != userNumber)
  {
    computerNumber = rand() % (highNumber - lowNumber) + lowNumber;
    tries++;

    if (computerNumber > userNumber)
    {
      highNumber = --computerNumber;
    }
    if (computerNumber < userNumber)
    {
      lowNumber = ++computerNumber;
    }
    if (computerNumber == userNumber)
    {
      cout << "Я угадал ваше число за " << tries << " попыток." << endl;
    }
  }
  
  return 0;
}