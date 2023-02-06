#include <iostream>
#include <array>
using namespace std;

int main()
{
    //it was a bubble sort
    //probably the worst efficiency algorithm
    //can be improved by providing a flag where we check if no items was swapped.

    int array[10] = {2, 1,3,4,5,6,7,8,9,10}, n, i, j, swap;
    // array[10] = {1,2,3,4,5,6,7,8,9,10};
    n = sizeof(array) / sizeof(array[0]);
    int count = 0;

    bool swapped = true;
    for (int j = n - 1 ; j >= 0 && swapped; j--)
    {
        swapped = false;
        for (int k = 0; k < j; k++)
        {
            cout<<"check "<<count<<endl;
            count++;
            if (array[k] > array[k + 1])
            {
                int temp = array[k];
                array[k] = array[k + 1];
                array[k + 1] = temp;
                swapped = true;
            }
        }
    }
    for (i = 0; i < n; i++)
        cout << array[i] << endl;
    return 0;
}