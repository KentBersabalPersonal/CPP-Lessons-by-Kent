#include <iostream>
using namespace std;

int main() {
  
    int board[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++) {
            cout << board[row][col] << " ";
        }
        cout << endl;
    }
  
    return 0;
}

// OUTPUT IS:
// 1 2 3
// 4 5 6

/*
 * MAIN IDEA:
 * A 2D array is like a grid (rows and columns) instead of a single list.
 * Useful for things like tic-tac-toe boards or tables of data.
 *
 * int board[2][3]      -> creates a grid with 2 rows and 3 columns
 * board[row][col]      -> accesses the value at a specific row and column
 * nested for loops     -> needed to visit every cell in the grid
 */

// THIS IS ON HOW SOME 2D GAMES WORK AND ALSO KIOSK MEALS HAHAHAHAHA 
