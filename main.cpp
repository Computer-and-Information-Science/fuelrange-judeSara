// Assignment 1 - Fuel Range
// TODO: YOUR NAME HERE : Joud Sara 
#include <iostream>
// TODO: Add the "using" statement
using namespace std;
int main() {
  // TODO: Declare your variables, with comments for each
  double fuelTank; // fuelTank is the fuel Tank capacity in gallons
  double mpg; // mpg is the vehicle's mileage
  int percentage;  // percentage is the gas percentage 
  double miles; // miles is the miles driven 

  // TODO: Prompt for and input the required values
 cout << " please enter the fuel amount available in the tank : ";
 cin >> fuelTank; cout << endl;
 cout << " please enter MPG of the vehicle ";
 cin >> mpg; cout << endl;
 cout << " please enter the percentage of the fuel";
 cin >> percentage; cout << endl;

  // TODO: Calculate the results
miles = fuelTank * mpg * percentage/100;
  // TODO: Output the results
  cout << "the vehicle can be driven for : " << miles << "miles.";
  return 0;
}
