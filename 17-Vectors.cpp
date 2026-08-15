#include <iostream>
#include <vector>
using namespace std;

int main() {
  
    vector<int> scores = {85, 90, 78};

    scores.push_back(95);   // adds a new value to the end

    for (int i = 0; i < scores.size(); i++) {
        cout << "\nScore " << i + 1 << ": " << scores[i] << endl;
    }
  
    return 0;
}
// OUTPUT IS:
// Score 1: 85
// Score 2: 90
// Score 3: 78
// Score 4: 95

/*
 * MAIN IDEA:
 * A vector is like an array, but it can GROW or SHRINK in size while
 * the program is running — arrays have a fixed size, vectors don't.
 *
 * #include <vector>     -> needed to use vectors
 * vector<int> scores    -> creates a vector that holds integers
 * scores.push_back(95)  -> adds a new value to the end of the vector
 * scores.size()         -> returns how many items are currently in it
 */

// SAME CONCEPT LANG SA ARRAY.PUSH MAG ADD UG ANOTHER VALUE SA END DATA SA ARRAY
