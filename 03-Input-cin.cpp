
#include <iostream>
#include <string> // A Library for strings
using namespace std;

int main() {

    string name;
    cout << "\nEnter your name: ";
  
    cin >> name;
    cout << "\nHello, " << name << "!" << endl;
    
  return 0;
}

//  THE OUTPUT IS - HELLO, ENTERED NAME!

/*
 * MAIN IDEA:
 * This program asks the user to type their name (input), stores it in the
 * "name" variable, then greets them using that input.
 *
 * cout << ...  -> displays text/prompts on the screen (output)
 * cin >> name; -> waits for the user to type something and saves it into "name" (input)
 */
