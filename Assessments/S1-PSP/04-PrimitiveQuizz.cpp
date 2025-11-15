#include <iostream>
#include <string>
#include <algorithm> // for transform
using namespace std;

int main() {
    string answer;

    // Question 1
    cout << "What is the capital of France? ";
    getline(cin, answer);

    // turn the answer into lowercase
    transform(answer.begin(), answer.end(), answer.begin(), ::tolower);

    if (answer == "paris") {
        cout << "Correct!" << endl;
    } else {
        cout << "Wrong." << endl;
    }

    // Extra questions (example: 3 total, can make 10 if you want)
    cout << "\nWhat is the capital of Germany? ";
    getline(cin, answer);
    transform(answer.begin(), answer.end(), answer.begin(), ::tolower);

    if (answer == "berlin") {
        cout << "Correct!" << endl;
    } else {
        cout << "Wrong." << endl;
    }

    cout << "\nWhat is the capital of Italy? ";
    getline(cin, answer);
    transform(answer.begin(), answer.end(), answer.begin(), ::tolower);

    if (answer == "rome") {
        cout << "Correct!" << endl;
    } else {
        cout << "Wrong." << endl;
    }
}
