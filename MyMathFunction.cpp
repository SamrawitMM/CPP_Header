#include <iostream>
#include <string>
#include <cmath>
#include "MyMathFunction.h"
using namespace std;

// function definitions
int getPosInt(string msg){
    int num = 0;
    do{
        cout << msg << endl;
        cin >> num;

    }while(num <= 0);
    return num;
}
double areaOfCircle(int r){
    return PI * pow(r, 2);
}
double volOfSphere(int r){
    double n = 1.3333;
    return PI * n * pow(r, 3);
}
