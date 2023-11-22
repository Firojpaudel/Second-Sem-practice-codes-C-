// Program using multiple catch blocks for single try block
#include <iostream>
using namespace std;

int main() {
    try {
        int x;
        cout << "Enter an integer: ";
        cin >> x;

        if (x == 0) {
            throw 0;  // Throw an int exception for simplicity
        }

        int result = 10 / x;
        cout << "Result: " << result << endl;
    } catch (int e) {
        cerr << "Caught exception: Division by zero not allowed" << endl;
    } catch (...) {
        cerr << "Caught unknown exception" << endl;
    }

    return 0;
}
