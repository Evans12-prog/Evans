#include <iostream>
using namespace std;

int main() {
    // Declare a variable to store the name
    string name;
    // Ask the user for their name
    cout << "Enter your name: ";
    getline(cin, name);  // Allows full name with spaces

    // Display the name
    cout << "Hello, " << name << "!" << endl;

    return 0;
}

