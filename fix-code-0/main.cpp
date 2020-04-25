#include <iostream>
#include <string>
using namespace std;

int main() {
  string cat_food_price1 = "Super special cat food costs 20 per pound.";
  int cat_food_cost = 20;
  int cat_food_amount_lbs = 30;
  int cat_food_price = cat_food_cost * cat_food_amount_lbs;
  cout << cat_food_price1;
  cout << " Therefore with " << cat_food_amount_lbs << " pounds, ";
  cout << "the total cost will be " << cat_food_price << endl;
}
