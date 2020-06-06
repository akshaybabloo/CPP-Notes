#include <iostream>

using namespace std;

// Creating a s struct
struct students {
    string name;
    float gpa;
};

int main() {

    students student; // Initialise students structure

    student.name = "Akshay"; // Access the name and add string to it
    student.gpa = 5.0; // Access the gpa and add float to it.

    cout << student.name << " has " << student.gpa << endl; // Print out its values.

    return 0;
}