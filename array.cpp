#include <iostream>
using namespace std;

int main() {
    const int array = 5;
    double num[array];
    double sum = 0;

    // loop to add each vaue to the array
    for (int i = 0; i < array; i++) {
        cout << "Enter value " << (i + 1) << ": ";
        cin >> num[i];
        sum += num[i];
    }

    //Find average
    double average = sum / array;

    cout << "The average of the values is: " << average << endl;

    return 0;
}