#include <iostream>
using namespace std;

class Student {
    public:
        string name;
        int age;
        int grade;

        Student(string n, int a, int b) {   // CONSTRUCTOR
            name = n;
            age = a;
            grade = b;
        }
};

int main() {
  
    Student s1("Kent", 20, 90);

    cout << "\nName: " << s1.name << endl;
    cout << "\nAge: " << s1.age << endl;
    cout << "\nGrade: " << s1.grade << endl;
 
    return 0;
}

// OUTPUT IS:

// Name: Kent
// Age: 20
// Grade: 90

/*
 * MAIN IDEA:
 * A constructor is a special function that runs automatically when an
 * object is created, used to set up its initial values.
 *
 * Student(string n, int a) { ... }
 *   -> has the SAME name as the class, no return type
 *   -> runs automatically when a new Student object is made
 * Student s1("Kent", 20);
 *   -> creates s1 and immediately passes values into the constructor,
 *      instead of setting each property one by one
 */


