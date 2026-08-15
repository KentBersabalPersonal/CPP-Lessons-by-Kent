#include <iostream>
using namespace std;

class Student { // BASICALLY AND OBJECT IN JAVASCRIPT
    public: // STRUCTS ARE PUBLIC BY DEFAULT 
        string name;
        int age;
        int grade;
};

int main() {
  
    Student s1;
    s1.name = "Kent";
    s1.age = 20;
    s1.grade = 90;

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
 * A class is a blueprint for creating objects, grouping data and
 * behavior together — very similar to a struct, but with more features.
 *
 * class Student { ... }   -> defines the blueprint
 * public:                 -> makes the members below it accessible from
 *                           outside the class (structs are public by
 *                           default, but classes need this written out)
 * Student s1;              -> creates an OBJECT (instance) of the class
 * s1.name / s1.age         -> accesses the object's data using a dot
 */
