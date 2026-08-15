
// DATA TYPES OF C++ //

#include <iostream>
using namespace std;

int main() {

// STRINGS ARE USED FOR VARIABLES THAT CONTAINS TEXTS //

string name = "Denzel Kent Bersabal";
cout << "Name: " << name << endl;

// INT || INTEGER ARE USED FOR VARIABLES THAT CONTAINS NUMBERS //

int age = 18;
cout << "Age: " << age << endl;

// DOUBLE ARE USED FOR VARIABLES THAT CONTAINS TWO DECIMAL NUMBERS //

double height = 160.49;
cout << "Height: " << height << endl;

// FLOAT ARE USED FOR VARIABLES THAT CONTAINS MANY DECIMAL NUMBERS //

float pi = 3.1416;
cout << "pi: " <<pi << endl;

// BOOL ARE USED TO DETERMINE TRUE OR FALSE // 

int ages;

cout << "Enter your age: ";
cin >> ages;

bool voting = (ages >= 18);

string canVote;

if (voting) {
  canVote = "Eligible";
} 
  else {canVote = "Not Eligible";
}
cout << "Eligible or not for voting: " << canVote << endl;

// CHAR IS USED FOR A SINGLE CHARACTER // // USES SINGLE QUOTE //

char grade = 'A';
cout << "Grade: " << grade << endl;

return 0;
}
