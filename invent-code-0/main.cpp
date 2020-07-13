#include <iostream>
#include <string>
using namespace std;

int main() {
//////////////// Segment 1 ///////////////////////
  int first = 100;
  int second = 2450;
  float third = 100.0;
  string fourth = "550.0";
  cout << "Type" << "\t Name" << "\t Value" << endl;
  cout << "Integer"<< "\t first" << "\t  " <<  first  << endl;
  cout << "Integer"<< "\t second" << "\t  " <<  second << endl;
  cout << "Float"<< "\t third" << "\t  " <<  third << endl;
  cout << "String"<< "\t fourth" << "\t  " <<  fourth << endl;
  cout << "\n";

/////////////// Segment 2 ///////////////////////
  first = first + second * 2;
  second = second + 50;
  third = second / third;
  fourth = "22222222222";
  cout << "Type" << "\t Name" << "\t Value" << endl;
  cout << "Integer"<< "\t first" << "\t  " <<  first  << endl;
  cout << "Integer"<< "\t second" << "\t  " <<  second << endl;
  cout << "Float"<< "\t third" << "\t  " <<  third << endl;
  cout << "String"<< "\t fourth" << "\t  " <<  fourth << endl;
  cout << "\n";

/////////////// Segment 3 ///////////////////////
  first = second / first;
  third = first / third;
  fourth = "";
  cout << "Type" << "\t Name" << "\t Value" << endl;
  cout << "Integer"<< "\t first" << "\t  " <<  first  << endl;
  cout << "Integer"<< "\t second" << "\t  " <<  second << endl;
  cout << "Float"<< "\t third" << "\t  " <<  third << endl;
  cout << "String"<< "\t fourth" << "\t  " <<  fourth << endl;
  cout << "\n";
}  
/*
Table at the end of Segment 1

Type   | Name     | Value
------ | -------- | -----
       |          |
*/

/*
Table at the end of Segment 2

Type   | Name     | Value
------ | -------- | -----
       |          |
*/

/*
Table at the end of Segment 3

Type   | Name     | Value
------ | -------- | -----
       |          |
*/
