#include <iostream>
#include <cmath>
using namespace std;

void missingSide(int h, int a);
int square(int s);

int main()
{
    /*Create a simple algorithm that accepts two integers (h and a) where h is the hypotenuse and a is a side of the same triangle-
    respectively. Compute the third side of the triangle, b, using the Pythagorean theorem. If b is greater than a print “b is longer than a” and exit. Otherwise, print “a is longer than b” and then exit.
    */
    // a^2 + b^2 = h^2
    int h, a, b;
    cout << "Enter first side(a): ";
    cin >> a; // this is a^2 in the formula
    cout << "Enter second side(b): ";
    cin >> b; // this is b^2 in the formula
    cout << "Enter the hypotenuse: ";
    cin >> h; // this is h^2

    missingSide(h, a);


    return 0;
}

int square(int s)
{
    return s * s;
}

void missingSide(int h, int a)
{
    int g;
    int b;

    // square the hypotenuse(h)
    h = square(h);

    // square the given side
    g = square(a);

    // subtract the squares(h - g)
    b = h - g;

    // find the square root of the subtraction
    b = sqrt(b);

    cout<<"Missing side is " << b <<endl;

    if(a > b){
        cout<<"a is longer than b";
    }else{
        cout<<"b is longer than a";
    }
}