#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double radius;

    cout << "Enter the radius: ";
    cin >> radius;

    //Calculate volume
    double volume = (4/3) * M_PI * pow(radius, 3);

    cout << "Volume of the sphere is: " << volume << endl;

    return 0;
}