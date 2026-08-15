#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i <= 5; i++) {
        cout << "\nCount: " << i << endl;
    }
    return 0;
}
// OUTPUT IS:
// Count: 0
// Count: 1
// Count: 2
// Count: 3
// Count: 4
// Count: 5

/*
 * MAIN IDEA:
 * A for loop repeats a block of code a set number of times.
 *
 * for (int i = 0; i <= 5; i++)
 *   -> int i = 0     : starting point (runs once, at the very start)
 *   -> i <= 5        : condition checked before every loop; stops when false
 *   -> i++           : runs after each loop, increases i by 1
 */
