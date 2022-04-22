//Complete the function that calculates the area of the red square, 
//when the length of the circular arc A is given as the input.
//Return the result rounded to two decimals.

#include <iostream>
#include <cmath>
using namespace std;


double square_area(double A) {
    double circumferense = A * 4;
    double radius = circumferense / (2*M_PI);
    double a = pow(radius,2);
    int c = (int)(a * 100 + .5);
    float b = c/100.0;
    return b;
};

int main(){
    square_area(100);
}
