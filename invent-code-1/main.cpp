#include <iostream>
#include <string>
using namespace std;

int main() {
  int original;
  /* float original_float = 13.5; */
  cout << "Please enter an interger: " << endl;
  cin >> original;
  int clone = original + 14;
  int product = original * clone;
  cout << "The product is: " << product << endl;
}

/*
Table at the end of the program.

Type   | Name           | Value
------ | --------       | -----
 int   | original       | user input = 13
 float | original_float | 13.5
 int   | clone          | 13 + 14 = 27
 int   | product        | 27 * 13 = 351
*/
