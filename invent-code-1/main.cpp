#include <iostream>
#include <string>
using namespace std;

int main() {
int original;
float orignal_float;
orignal_float = 13.5;
cout << "please enter an integer:" << endl;
cin >> original;
int clone = original + 14;
int product = original * clone;
cout << "The product is: " << product << endl;
}

/*
Table at the end of the program.

Type   | Name     | Value
------ | -------- | -----
 integer|original |3
 integer|clone |17
 float|orignal_float|13.5
 integer|product |51
*/
