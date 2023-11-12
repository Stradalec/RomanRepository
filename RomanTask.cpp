/**********************************
* Автор: Калинин Андрей           *
* Лабораторная №8                 *
* Дата: 12.11.2023                *
* Название: Арабские цифры        *
* https://onlinegdb.com/dOMwqke-o *
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
    } else if (number / 500 > 0) {
      int temp = 500;
      romanNumber += "D";
      number = number - temp;    
    } else if (number / 100 > 0) {
      int temp = 100;
      romanNumber += "С";
      number = number - temp;  
    } else if (number / 50 > 0) {
      int temp = 50;
      romanNumber += "L";
      number = number - temp;
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
