#include <iostream>
#include <string>
#include <cmath>
#include "MyMathFunction.h"
using namespace std;

// entry point

int main(){
    int radius = getPosInt("Enter a positive integer for the radius of a circle/sphere: ");
    double aCircle = areaOfCircle(radius);
    double vSphere = volOfSphere(radius);
    cout << "The area of a circle with radius of " <<
            radius << " is " << aCircle << "." << endl;
    cout << "The volume of a sphere with radius of " <<
            radius << " is " << vSphere << "." << endl;

    return 0;
}

