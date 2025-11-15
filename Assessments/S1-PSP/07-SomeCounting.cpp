#include <iostream>
using namespace std;

int main() {

    // 1. counts from 0 to 50
    for (int i = 0; i <= 50; i++) {
        cout << i << " ";
    }
    cout << endl;

    // 2. counts from 50 down to 0
    for (int i = 50; i >= 0; i--) {
        cout << i << " ";
    }
    cout << endl;

    // 3. counts from 30 to 50
    for (int i = 30; i <= 50; i++) {
        cout << i << " ";
    }
    cout << endl;

    // 4. counts from 50 down to 10 by 2
    for (int i = 50; i >= 10; i -= 2) {
        cout << i << " ";
    }
    cout << endl;

    // 5. counts from 100 to 200 by 5
    for (int i = 100; i <= 200; i += 5) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
