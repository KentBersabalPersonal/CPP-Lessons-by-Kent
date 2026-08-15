
#include <iostream>
using namespace std;

int main() {

  int score = 85;

  if (score >= 90) {
      cout << "\nGrade: A" << endl;
  } else if (score >= 80) {
      cout << "\nGrade: B" << endl;
  } else {
      cout << "\nGrade: C" << endl;
  }

  return 0;
}

// OUTPUT IS:
//GRADE: B 

/*
 * MAIN IDEA:
 * This program checks the value of "score" using if-else conditions and
 * prints a grade based on which range the score falls into.
 */
