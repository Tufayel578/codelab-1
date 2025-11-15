#include <iostream>
using namespace std;

int main() {
    int password;               // user's attempt
    const int correct = 12345;  // correct password
    int attemptsLeft = 5;       // number of attempts allowed

    while (attemptsLeft > 0) {
        cout << "Enter password: ";
        cin >> password;

        if (password == correct) {
            cout << "Welcome to the Secure Area" << endl;
            return 0; // end the program
        }

        attemptsLeft--; // reduce remaining attempts

        if (attemptsLeft > 0) {
            cout << "Incorrect. You have " << attemptsLeft 
                 << " attempt(s) remaining." << endl;
        }
    }

    // if all attempts are used
    cout << "5 failed attempts. The authorities have been alerted!" << endl;
}

