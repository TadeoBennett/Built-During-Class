#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    cout << "Enter the binary string: ";
    getline(cin, input);

    int value = 0;
    int exponentValue = 1;
    for (int i = input.length() - 1; i >= 0; i--)
    {
        if (input[i] == '0')
        {
            // do nothing;
        }
        else if (input[i] == '1')
        {
            value += exponentValue;
        }
        else
        {
            cout << "Invalid bit string";
            break;
        }
        // cout<<"exponent value: "<<exponentValue<<endl;
        exponentValue *= 2;
    }
    cout << "\nValue is " << value;

    return 0;
}