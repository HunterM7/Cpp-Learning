// Программа Menu Chooser
// Программа позволяет выбрать уровень сложности
#include <iostream>
using namespace std;

int main ()
{
  enum Difficulty {
    EASY = 1,
    MEDIUM,
    HARD
  };

  cout << "Выберите уровень сложности: " << endl << endl;
  const string levels = "1 - Легкий\n2 - Средний\n3 - Сложный\n";
  cout << levels << endl;
  cout << "Ваш выбор: ";

  int choice;
  bool correctChoice = false;

  while (!correctChoice) {
    cin >> choice;

    switch (choice) {
      case EASY:
        cout << endl << "Вы выбрали легкий уровень сложности." << endl;
        correctChoice = true;
        break;
      case MEDIUM:
        cout << endl << "Вы выбрали средний уровень сложности." << endl;
        correctChoice = true;
        break;
      case HARD:
        cout << endl << "Вы выбрали сложный уровень сложности." << endl;
        correctChoice = true;
        break;
      default:
        cout << endl << "Пожалуйста, выберите один из предложенных уровней сложности:" << endl;
        cout << levels << endl;
        cout << "Ваш выбор: ";
    }
  }

  return 0;
}