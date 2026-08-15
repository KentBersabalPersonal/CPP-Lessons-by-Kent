
#include <iostream>
using namespace std;

string loginUsername;
string loginPassword;
string username;
string password;
string confirmPassword;
string fullName;
int age;
bool registered = false;

void registerUser();
void userProfile();
void userDashBoard();
void loginUser();
void exitUser();

int main() {

  while(true) {

  cout << "\n========== MENU ==========\n" << endl;

  cout << "1. Register" << endl;
  cout << "2. Login" << endl;
  cout << "3. Exit" << "\n" << endl;

  cout << "==========================\n" << endl;

  int choice;

  cout << "Type The Number Of Choice Here: ";
  cin >> choice;
  cin.ignore();

  switch(choice) {

    case 1: 
      registerUser();
      break;

    case 2: 
      loginUser();
      break;

    case 3: 
      exitUser();
      return 0;

    default: 
      cout << "Invalid Choice" << "\n" << endl;
    }
  }

  return 0;
}

// REGISTER LOGIC LOOP FUNCTION //

void registerUser() { 

  if (registered) {
      cout << "\nAlready Registered. Please Login." << endl;
      return;
  }

    cout << "\nRegister Selected" << "\n" << endl;

    cout << "========== REGISTER ==========\n" << endl;

    cout << "Username: ";
    getline(cin, username);
    
    cout << "Password: ";
    getline(cin, password);

  while(true) {
    cout << "Confirm Password: ";
    getline(cin, confirmPassword);

    if (password == confirmPassword) {
        break;
    }
      else 
      {
        cout << "\nPassword does not match. Try Again.\n" << endl;
      }
  }

    cout << "Full Name: ";
    getline(cin, fullName);

    cout << "Age: ";
    cin >> age;
    cin.ignore();

    cout << "=============================\n" << endl;

    cout << "\nRegistered Successful!"<< endl;
    registered = true;

    cout << "Back To Menu" << endl;
}

// PROFILE FUNCTION //

void userProfile() {
  cout << "\n========== PROFILE ==========\n";

  cout << "Username: " << username << endl;
  cout << "Password: " << password << endl;
  cout << "Fullname: " << fullName << endl;
  cout << "Age: " << age << endl;
}

// DASHBOARD LOGIC FUNCTION // 

void userDashBoard() { 

  int dashBoardChoice;

    while(true) {
      cout << "\n========== DASHBOARD ==========\n";
      cout << "Welcome, " << username << " !" << endl;

      cout << "1. View Profile" << endl;
      cout << "2. Logout" << endl;

      cout << "\n===============================\n";

      cout << "Type Your Choice: ";
      cin >> dashBoardChoice;
      cin.ignore();

      switch(dashBoardChoice) {

        case 1: 
          userProfile();
          break;

        case 2: 
          cout << "\nLogging Out...\n" << endl;
          return;

        default: 
          cout << "Invalid Choice" << endl;
    }
  }
}

// LOGIN LOGIC LOOP FUNCTION //

void loginUser() {
  cout << "Login Selected" << "\n" << endl;
  cout << "========== LOGIN ==========\n" << endl;

  if (!registered) {
    cout << "\nNo account found. Please register first!" << endl;
    return;
  }

for(int attempts = 1; attempts <= 3; attempts++) {

  cout << "\nAttempts" << attempts << "/3\n";

    cout << "Username: ";
    getline(cin, loginUsername);

    cout << "Password: ";
    getline(cin, loginPassword);

    if (loginUsername == username && loginPassword == password) {
        cout << "\nLogin Successful!\n";
        userDashBoard();
        return;
    } 
        else {cout << "Invalid Username or Password!\n";
    } 
  }
    cout << "Too many failed attempts." << "\n" << endl;
    cout << "Returning to Menu..." << endl; 
}

// EXIT END LOGIC FUNCTION //

void exitUser() {
      cout << "\nThank You For Using The Form, Please Come Again!" << "\n" << endl;
}
