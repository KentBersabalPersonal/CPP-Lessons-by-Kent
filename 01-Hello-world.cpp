
#include <iostream>
using namespace std;

int main() {
    cout << "\nHello World" << endl;
  
    return 0;
}

/*
 * LINE-BY-LINE EXPLANATION:
 *
 * #include <iostream>   -> Brings in the library that lets us use cout/cin for output/input.
 * using namespace std;  -> Lets us write "cout" instead of "std::cout" every time.
 
 * int main() { }        -> The starting point of every C++ program; execution begins here.
 * cout << "\nHello World" << endl;
 *                        -> Prints "Hello World" to the screen.
 *                           "\n" adds a new line before it, "endl" ends the current line.
 * return 0;              -> Tells the system the program ran successfully (0 = no errors).
 */
