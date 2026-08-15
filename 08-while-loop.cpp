#include <iostream>
using namespace std;

int main() {
    
    int i = 1;
    
    while (i <= 5) {
        cout << "\nCount: " << i << endl;
        i++;
    }
    
    return 0;
}
// OUTPUT IS:
// Count: 1
// Count: 2
// Count: 3
// Count: 4
// Count: 5

/*
 * MAIN IDEA:
 * A while loop repeats a block of code as long as its condition is true.
 * Unlike a for loop, the counter (i) is set up and increased manually.
 *
 * while (i <= 5)  -> checked BEFORE each loop; if false, the loop never runs
 * i++;            -> must be written manually inside the loop, or it repeats forever
 */
