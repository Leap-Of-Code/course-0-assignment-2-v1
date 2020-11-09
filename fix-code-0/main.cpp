#include <iostream>
#include <string>
using namespace std;

int main() {
  int cat_food_cost = 20;
  int cat_food_amount_lbs = 30;

  int cat_food_price = cat_food_cost * cat_food_amount_lbs;

  cout << "Therefore with " << cat_food_amount_lbs << " pounds, ";
  cout << "the total cost will be $" << cat_food_price << endl;
}
