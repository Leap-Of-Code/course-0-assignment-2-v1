#include <iostream>
#include <string>
using namespace std;

int main() {
  int original;
  //float original_float = 13.5;
  //According to the slack thread with vaibahv, we should not create original_float variable. there's an error in this lesson.
  cout << "Please enter an integer ";
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
   
  int   original   1
  int   clone      15
  int   product    15
*/
