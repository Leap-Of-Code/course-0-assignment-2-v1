#include <iostream>
#include <string>
using namespace std;

int main() {
  int original = 0;

  float original_float ; 
  original_float = 13.5; 
  std:: cout << "Please enter an integer "; 
  std::cin >> original;
  std::cout << endl;  
  const int clone_original = original + 14; 
  const int product = original * clone_original;  
  std::cout << "The product is " << product << endl; 
}

/*
Table at the end of the program.

Type   | Name     | Value
------ | -------- | -----
int     main      |
float  original_float   
 
*/
