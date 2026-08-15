#include <iostream>
using namespace std;

void greet(string name);   // function prototype

int main() {
    
    greet("Kent");
    return 0;
}

void greet(string name) {
    cout << "\nHello, " << name << "! Welcome to C++." << endl;
}

// OUTPUT IS:
// Hello, Kent! Welcome to C++.

/*
 * MAIN IDEA:
 * A void function performs an action but does NOT return anything back
 * to where it was called.
 *
 * void greet(string name);  -> function prototype: no return value,
 *                           just "void"
 * void greet(string name) { cout << ...; }
 *                          -> declares a function that prints a greeting
 *                           but doesn't send any value back
 * greet("Kent");            -> calling the function; nothing is stored
 *                           from it (no "int result = ...")
 */

// KAYA PANA GUYS :3
