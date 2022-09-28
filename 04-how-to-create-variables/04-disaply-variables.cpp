/*
The cout object is used together with the << operator to display variables.

To combine both text and a variable, separate them with the << operator:
*/

#include <iostream>
using namespace std;

int main() {
  int myAge = 35;
  cout << "I am " << myAge << " years old.";
  return 0;
}