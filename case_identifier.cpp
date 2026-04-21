#include <iostream>
using namespace std;

// Check uppercase
bool isUpperCase(char letter) {
    return (letter >= 'A' && letter <= 'Z');
}

//Check lowercase
bool isLowerCase(char letter) {
    return (letter >= 'a' && letter <= 'z');
}

int main() {
    char input;

    cout << "Enter a character: ";
    cin >> input;

    if (isUpperCase(input)) {
        cout << input << " is an uppercase letter." << endl;
    } 
    else if (isLowerCase(input)) {
        cout << input << " is a lowercase letter." << endl;
    } 
    else {
        cout << input << " is not an alphabetic letter." << endl;
    }

    return 0;
}