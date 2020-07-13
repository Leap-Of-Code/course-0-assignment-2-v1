#include <iostream>
#include <string>
using namespace std;

int main() {
  int original;
  //float original_float=13.5;
  cout << "Please enter an integer:";
  cin >> original;
  int clone = 14 + original;
  int product = original * clone;
  cout << "The product is:" << product;

}
