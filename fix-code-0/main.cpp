#incldue <iostream>
#include <string>
using namespace std;

int main() {
  int original; 
  float original_float; 
  original_float = 13.5;
  cout << "Please enter an integer: " << endl; 
  cin >> original;
  int clone = original + 14; 
  int product = original * clone; 
  cout << "The product is: " << product << endl; 

}

/*
Table at the end of the program.

Type   | Name     | Value
------ | -------- | -----
       |          |
*/
