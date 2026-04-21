#include <iostream>
using namespace std;

// Calculates Area
double Area(double length){
    return length * length;
}

// Calculates perimeter
double Perimeter(double length){
    return length * 4;
}

int main(){
    double length;

    cout << "Enter the length: ";
    cin >> length;

    double area = Area(length);
    double perimeter = Perimeter(length);

    cout << "Area of the square is: " << area << endl;
    cout << "Perimeter of the square is: " << perimeter << endl;

    return 0;
}