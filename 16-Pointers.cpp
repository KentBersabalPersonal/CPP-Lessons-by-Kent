#include <iostream>
using namespace std;

int main() {
  
    int number = 10;

    int* ptr = &number;    // pointer: stores the ADDRESS of "number"
    int& ref = number;     // reference: an ALIAS (another name) for "number"

    cout << "\nValue: " << number << endl;
    cout << "\nPointer's value: " << *ptr << endl;
    cout << "\nReference's value: " << ref << endl;

    *ptr = 20;   // changes "number" through the pointer
    cout << "\nAfter *ptr = 20, number is: " << number << endl;

    return 0;
}

// OUTPUT IS:

// Value: 10
// Pointer's value: 10
// Reference's value: 10
// After *ptr = 20, number is: 20

/*
 * MAIN IDEA:
 * A pointer stores the memory address of a variable, while a reference
 * is just another name for the same variable. Both let you access or
 * change the original variable indirectly.
 *
 * &number   -> the "address-of" operator, gets the memory address of number
 * int* ptr  -> declares a pointer that holds an address
 * *ptr      -> the "dereference" operator, gets the VALUE stored at that address
 * int& ref  -> declares a reference, tied permanently to "number"
 */

// NA STRESS PUDKO DIRI, NO COMMENT PERO MA GETS RANA KADUGAYAN :)
