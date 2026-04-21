#include <iostream>
using namespace std;

int main(){
    int days;

    cout << "Enter the number of days: ";
    cin >> days;

    // Calculate seconds
    int seconds = days * 24 * 60 * 60;

    cout << "Number of seconds in " << days << " day(s) is: " << seconds;

    return 0;
}
