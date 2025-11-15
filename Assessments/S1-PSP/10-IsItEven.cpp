#include <iostream>
#include <string>
using namespace std;

// function that checks if the number is even or odd
string checkEven(int num) {
    if (num % 2 == 0) {
        return "The provided number is even";  // returned if the number is even
    } else {
        return "The provided number is odd";   // returned if the number is odd
    }
}

int main() {
    int value; // will store the user’s number

    cout << "Enter a number: ";
    cin >> value;

    // call the function and store the returned message
    string result = checkEven(value);

    // print the message from main
    cout << result << endl;

    return 0;
} 

