#include <iostream>
using namespace std;

int main() {
    double x = 0;
    double y = 20;

    //loop to  SUBTRACT 4 FROM y & ADD 2/y TO x
    do {
        y -= 4;
        x += 2 / y;
    } while (y >= 6);

    cout << "Final value of x = " << x << endl;

    return 0;
}