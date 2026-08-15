#include <iostream>
using namespace std;

int main() {
  
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
  
    return 0;
}
// OUTPUT IS:
// *
// **
// ***
// ****
// *****

/*
 * MAIN IDEA:
 * A nested loop is a loop inside another loop. The outer loop controls
 * how many rows print, and the inner loop controls how many items
 * print per row.
 *
 * for (int i = 1; i <= 5; i++)   -> outer loop: controls the ROW number
 * for (int j = 1; j <= i; j++)   -> inner loop: runs "i" times per row,
 *                                   so each row prints more stars than before
 * cout << endl;                  -> moves to the next line after each row
 */

// BASICALLY IT'S A LOOP INSIDE A LOOP
