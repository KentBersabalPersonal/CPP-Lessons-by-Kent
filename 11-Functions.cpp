#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(5, 3);
    cout << "\nSum: " << result << endl;
  
    return 0;
}

// OUTPUT IS:
// Sum: 8

/*
 * MAIN IDEA:
 * A function is a reusable block of code that performs a task and can
 * be called whenever needed, instead of rewriting the same code.
 *
 * int add(int a, int b)  -> declares a function named "add" that takes
 *                           two integers and returns an integer
 * return a + b;          -> sends the result back to wherever the
 *                           function was called
 * add(5, 3)               -> calling the function with actual values
 */

// EXAMPLE LANG NI SA FUNCTIONS ANG SUM DIRI
