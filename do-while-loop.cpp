#include <iostream>
using namespace std;

int main() {
    int i = 1;
  
    do {
        cout << "\nCount: " << i << endl;
        i++; // i++ IS JUST i = i + i 
    } while (i <= 5);
  
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
 * A do-while loop works like a while loop, but it checks the condition
 * AFTER running the code — so it always runs at least once, even if the
 * condition is false from the start.
 *
 * do { ... } while (i <= 5);
 *   -> code runs first, condition checked last
 */
