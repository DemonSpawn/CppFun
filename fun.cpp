#include <iostream>
#include <string>
#include "funnyStuff.h"

using namespace std;

void changePointer(int* pointerAdress)
{
  int *b = 0;
  cout << "adress b: " << &b << endl;
  cout << "value b: " << b << endl;
  cout << "Adress given pointer: " << pointerAdress << endl;
  cout << "value given pointer: " << *pointerAdress << endl;

  pointerAdress = b;

  cout << "Adress new: " << pointerAdress << endl;

}

int main ()
{
  int int1 = 4;

  cout << "Value int1: " << int1 << endl;

  changePointer(&int1);

  cout << "Value int1: " << int1 << endl;

  return 0;
}
