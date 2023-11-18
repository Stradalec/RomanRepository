/**********************************
* Автор: Калинин Андрей           *
* Лабораторная №8                 *
* Дата: 12.11.2023                *
* Название: Арабские числа        *
* https://onlinegdb.com/492RUIOCn *
**********************************/

#include <iostream>
#include <string>

using namespace std;



int main() {
  int arrayLength;
  int number;
  string romanNumber;
  string inputRomanNumber;
  int outputNumber = 0;
  char checkArray[] = "IVXLCDM";
  char firstTemp;
  char secondTemp;
  char thirdTemp;
  char fourthTemp;
  
  cout << "Arabic number: ";
  cin >> number;
  cout << "Roman number: ";
  cin >> inputRomanNumber;
  arrayLength = inputRomanNumber.length();
  

  while (number > 0) {
    if (number / 1000 > 0) {
      int temp = 1000;
      romanNumber += "M";
      number = number - temp;
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
  
  for (int checkIndex = 0; checkIndex < arrayLength; ++checkIndex) {
    firstTemp = inputRomanNumber[checkIndex];
    secondTemp = inputRomanNumber[checkIndex + 1];
    if (firstTemp == checkArray[6] ) {
      outputNumber += 1000;
    } else if (firstTemp == checkArray[5] ) {
      outputNumber += 500;
    } else if (firstTemp == checkArray[4] ) {
      if (secondTemp == checkArray[6] ) {
        outputNumber += 900;  
      } else if (secondTemp == checkArray[5] ) {
        outputNumber += 400;  
      } else {
        outputNumber += 100;  
      } 
        
    } else if (firstTemp == checkArray[3] ) {
      outputNumber += 50;
    } else if (firstTemp == checkArray[2] ) {
      if (secondTemp == checkArray[3] ) {
        outputNumber += 40;  
      } else if (secondTemp == checkArray[4] ) {
        outputNumber += 90;  
      } else {
        outputNumber += 10;
      }
        
      } else if (firstTemp == checkArray[1] ) {
        if (secondTemp == checkArray[0] ) {
          if (thirdTemp == checkArray[0] ) {
            if (fourthTemp == checkArray[0] ) {
              outputNumber += 8;  
            }
            outputNumber += 7;
          }
          outputNumber += 6;
        } else {
          outputNumber += 5;  
        }
        
      } else if (firstTemp == checkArray[0] ) {
        if (secondTemp == checkArray[0] ) {
          if (thirdTemp == checkArray[0] ) {
            outputNumber += 3;
          }
          outputNumber += 2;
          
        } else if (secondTemp == checkArray[1] ) {
          outputNumber += 4;  
        } else if (secondTemp == checkArray[2] ) {
          outputNumber += 9;
        } else {
        outputNumber += 1;  
        }
      
      } else {
        cout << "Wrong symbol" << endl;  
      }
     
    }  

  if (outputNumber == 0) {
    cout << "Can not create new arabic number" << endl;  
  } else {
    cout << "New arabic number: " << outputNumber << endl;
  }
  
  cout << "New roman number: " << romanNumber;
  
  return 0;
}



