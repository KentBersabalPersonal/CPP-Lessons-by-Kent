#include <iostream>
using namespace std;

int add(int a, int b);   // function prototype

int main() {
    int result = add(5, 3);
    cout << "\nSum: " << result << endl;
    return 0;
}

int add(int a, int b) {
    return a + b;
}

// OUTPUT IS:
// Sum: 8

/*
 * MAIN IDEA:
 * int add(int a, int b);  -> function prototype: tells the compiler this
 *                           function exists before main() uses it
 *                           (the full code is written below main())
 * int add(int a, int b) { return a + b; }
 *                          -> declares a function named "add" that takes
 *                           two integers and returns an integer
 * return a + b;          -> sends the result back to wherever the
 *                           function was called
 * add(5, 3)               -> calling the function with actual values
 */

// KAYA PANI GUYS :3
