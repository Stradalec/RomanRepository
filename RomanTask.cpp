/**********************************
* Автор: Калинин Андрей           *
* Лабораторная №8                 *
* Дата: 12.11.2023                *
* Название: Арабские числа        *
* https://onlinegdb.com/joQoh_PSz *
**********************************/

#include <iostream>
#include <string>

using namespace std;



int main() {
  int number;
  string romanNumber;
  
  cout << "Arabic number: ";
  cin >> number;

  while (number > 0) {
    if (number / 1000 > 0) {
      int temp = 1000;
      romanNumber += "M";
      number = number - temp;
      cout << number;
      if (number  >= 900) {
        romanNumber += "CM";
        number = number - 900;
      }
    } else if (number / 500 > 0) {
      int temp = 500;
      romanNumber += "D";
      number = number - temp;
      if (number  >= 400) {
        romanNumber += "CD";
        number = number - 400;
      }
    } else if (number / 100 > 0) {
      int temp = 100;
      romanNumber += "С";
      number = number - temp;
      if (number  >= 90) {
        romanNumber += "XC";
        number = number - 90;
      }
    } else if (number / 50 > 0) {
      int temp = 50;
      romanNumber += "L";
      number = number - temp;
      if (number  >= 40) {
        romanNumber += "XL";
        number = number - 40;
      }
    } else if (number / 10 > 0) {
      int temp = 10;
      romanNumber += "X";
      number = number - temp;
    } else {
      switch (number) {
        case 1:
          romanNumber += "I";
          number = 0;
          break;
        case 2:
          romanNumber += "II";
          number = 0;
          break;
        case 3:
          romanNumber += "III";
          number = 0;
          break;
        case 4:
          romanNumber += "IV";
          number = 0;
          break;
        case 5:
          romanNumber += "V";
          number = 0;
          break;
        case 6:
          romanNumber += "VI";
          number = 0;
          break;
        case 7:
          romanNumber += "VII";
          number = 0;
          break;
        case 8:
          romanNumber += "VIII";
          number = 0;
          break;
        case 9:
          romanNumber += "IX";
          number = 0;
          break;
        default:
          cout << "Error";
      }
      
    }
    
  }
  
  cout << "Roman number: " << romanNumber;
  
  return 0;
}
