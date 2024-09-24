#include <iostream>
#include <cmath>
using namespace std;

int main () {

// Variables for calculating the discriminant and real roots
double x, x1, x2, discriminant, realPart, imaginaryPart;
double a;
cout << "a = ";
cin >> a;

double b;
cout << "b = ";
cin >> b;

double c;
cout << "c = ";
cin >> c;

// Calculate the discriminant
discriminant = b*b - 4*a*c;

// Calculate the roots according to the value of discriminant
if (discriminant > 0) {
    // two distinct real roots
    x1 = (-b + sqrt(discriminant)) / (2*a);
    x2 = (-b - sqrt(discriminant)) / (2*a);
    cout << "There are two distinctive roots: " << endl;
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
}

else if (discriminant == 0) {
    //exactly one real root
    x = -b / (2*a);
    cout << "There is exactly one real root: " << endl;
    cout << "x = " << x << endl;
}

else {
    // complex roots
    realPart = -b / (2*a);
    imaginaryPart = sqrt(-discriminant) / (2*a);
    cout << "There are no real roots (complex roots)" <<  endl;
    cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
    cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
}

    return 0;
}