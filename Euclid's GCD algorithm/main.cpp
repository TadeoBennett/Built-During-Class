#include <iostream>
using namespace std;

void gcd(int m, int n);

int main(){
    //ALgorithm for computing the GCD using Euclid's Algorithm
    int m, n;
    cout<<"Enter first number: ";
    cin>>m;
    cout<<"Enter second number: ";
    cin>>n;

    gcd(m, n);

    return 0;
}

void gcd(int m, int n){
    int r;
    while (n != 0)
    {
        cout<<"gcd("<<m<<","<<n<<") "<<"; r = "<<r<<endl;
        r = m % n;
        m = n;
        n = r;
    }
    cout<<"gcd("<<m<<","<<n<<") = "<<m;
}