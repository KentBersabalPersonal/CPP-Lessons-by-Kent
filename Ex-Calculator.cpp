
#include <iostream>
using namespace std;

int main() {

  char op;
  double num1, num2;
  double result = 0;

  // PROGRAM INPUT NA CODE NI DIRI //

  cout << "\nEnter 1st Number: " << endl;
  cin >> num1;

  do {
  cout << "\nEnter the operator: " << endl;
  cin >> op;

  if (op != '+' && op != '-' && op != '/' && op != '*') {
      cout << "\nInvalid Operator! Please choose (+ - / *)." << endl;
  }
  } while (op != '+' && op != '-' && op != '/' && op != '*');

  cout << "\nEnter 2nd Number: " << endl;
  cin >> num2;

  // CALCULATION PROGRAM //

  if (op == '+') {
      result = num1 + num2;
      cout << "\nThe result is: " << result << "\n" << endl;
  } else if (op == '-') {
      result = num1 - num2;
      cout << "\nThe result is: " << result << "\n" << endl;
  } else if (op == '/') {
      result = num1 / num2;
      cout << "\nThe result is: " << result << "\n" << endl;
  } else if (op == '*') {
      result = num1 * num2;
      cout << "\nThe result is: " << result << "\n" << endl;
  } else {
      cout << "\nInvalid Operation!" << "\n" << endl;
  }
 
  return 0;
}

