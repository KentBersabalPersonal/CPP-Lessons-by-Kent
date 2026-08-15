#include <iostream>
using namespace std;

int main() {
    int day = 3;

    switch (day) {
        case 1:
            cout << "\nMonday" << endl;
            break;
        case 2:
            cout << "\nTuesday" << endl;
            break;
        case 3:
            cout << "\nWednesday" << endl;
            break;
        case 4:
            cout << "\nThursday" << endl;
            break;
        case 5:
            cout << "\nFriday" << endl;
            break;
        default:
            cout << "\nWeekend" << endl;
            break;
    }
  
    return 0;
}
// OUTPUT IS:
// Wednesday

/*
 * MAIN IDEA:
 * This program checks the value of "day" and prints the matching day name
 * using a switch statement instead of multiple if-else checks.
 *
 * switch (day)   -> looks at the value of "day" and jumps to the matching case
 * case 3:        -> since day = 3, this case runs -> prints "Wednesday"
 * break;         -> stops the switch from checking the rest of the cases
 *                  (without it, it would keep running the cases below too)
 * default:       -> runs only if none of the cases matched
 */
