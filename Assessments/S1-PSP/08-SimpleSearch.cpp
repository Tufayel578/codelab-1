#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"}; // array of names
    string searchTerm; // will hold the user input
    bool found = false;

    cout << "Enter a name to search for: ";
    cin >> searchTerm;

    // loop through the array checking each name
    for (int i = 0; i < 6; i++) {
        if (names[i] == searchTerm) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << searchTerm << " was found in the list." << endl;
    } else {
        cout << searchTerm << " was not found." << endl;
    }
}
