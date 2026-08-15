#include <iostream>
using namespace std;

int main() {
    int grades[5] = {85, 90, 78, 92, 88};

    for (int i = 0; i < 5; i++) {
        cout << "\nGrade " << i + 1 << ": " << grades[i] << endl;
    }
  
    return 0;
}
// OUTPUT IS:
// Grade 1: 85
// Grade 2: 90
// Grade 3: 78
// Grade 4: 92
// Grade 5: 88

/*
 * MAIN IDEA:
 * An array stores multiple values of the same type in one variable,
 * accessed by an index (position), starting at 0.
 *
 * int grades[5] = {...}  -> creates an array that holds 5 integers
 * grades[i]              -> accesses the value at position i
 *                           (grades[0] is the FIRST item, not grades[1])
 */

// CONFUSING AT FIRST PERO KAYA RANA :)
