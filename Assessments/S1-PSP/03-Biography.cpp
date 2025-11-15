#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;        // to store the user's name
    string hometown;    // to store the user's hometown
    int age;            // to store the user's age

    cout << "Enter your full name: ";
    getline(cin, name); // allows spaces in the name

    cout << "Enter your hometown: ";
    getline(cin, hometown); // allows spaces here too

    cout << "Enter your age: ";
    cin >> age; // reads the age

    // prints everything with one cout (each on a new line)
    cout << name << "\n" << hometown << "\n" << age << endl;
}

