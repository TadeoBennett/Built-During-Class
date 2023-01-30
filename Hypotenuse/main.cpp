#include <iostream>
#include <cmath>
using namespace std;

void m(int a, int b, int h);
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

    m(a, b, h);


    return 0;
}

int square(int s)
{
    return s * s;
}

void m(int a, int b, int h)
{
    int g;
    int m;

    if (a == 0)
    {
        m = a;
        g = b;
    }
    else
    {
        m = b;
        g = a;
    }

    // square the hypotenuse(h)
    h = square(h);

    // square the given side
    g = square(g);

    // subtract the squares(h - g)
    m = h - g;

    // find the square root of the subtraction
    m = sqrt(m);

    cout<<"Missing side is " << m <<endl;

    if (a == 0){
        if (m > sqrt(g)){
            cout<<"a is longer than b";
        }else{
            cout<<"b is longer than a";
        }
    }else if (b ==0){
        if (m > sqrt(g)){
            cout<<"b is longer than a";
        }else{
            cout<<"a is longer than b";
        }
    }
}