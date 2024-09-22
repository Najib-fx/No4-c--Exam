#include <iostream>
using namespace std;

int main() {
    int grade;

    //Using Do-while loop ,input validation
    do {
        cout << "Enter the grade scored in the class (0-100): ";
        cin >> grade;

        // Check the input
        if (grade < 0 || grade > 100) {
            cout << "Please enter a grade between 0 and 100." << endl;
        }
    } while (grade < 0 || grade > 100); // Loop till the condition is acquired

    // Output
    cout << "You have entered the grade: " << grade << endl;

    return 0;
}
