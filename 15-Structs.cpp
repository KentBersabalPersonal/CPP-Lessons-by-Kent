#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
    int grade;
};

int main() {
  
    Student s1;
    s1.name = "Joshua Kent Garcia";
    s1.age = 20;
    s1.grade = 90;

    Student s2;
    s2.name = "Donny Joe Pangilinan";
    s2.age = 22;
    s2.grade = 88;

    cout << "\nName: " << s1.name << endl;
    cout << "\nAge: " << s1.age << endl;
    cout << "\nGrade: " << s1.grade << endl;

    cout << "\nName: " << s2.name << endl;
    cout << "\nAge: " << s2.age << endl;
    cout << "\nGrade: " << s2.grade << endl;

    return 0;
}

// THE OUTPUT IS:

// Name: Joshua Kent Garcia
// Age: 20
// Grade: 90

// Name: Donny Joe Pangilinan
// Age: 22
// Grade: 88

/*
 * MAIN IDEA:
 * A struct groups related variables together under one custom type,
 * so you can treat them as a single "object" instead of separate variables.
 *
 * struct Student { ... }   -> defines a new type with 3 pieces of data
 * Student s1;                -> creates a variable of type Student
 * s1.name / s1.age / s1.grade -> accesses each piece of data using a dot
 */

// BASICALLY STRUCT IS AN OBJECT TO ADD DIFFERENT VALUES INSIDE ONE VARIABLE
