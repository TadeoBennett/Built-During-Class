#include <iostream>
using namespace std;

int main()
{
    /*There are n lockers in a hallway. numbered sequentially from 1 to n. Initially all the locker doors are closed. You make n passes by the lockers, each time staning with locker #1. On the ith pass. i = 1, 2, ... , n, you toggle the door of every ith locker: if the door is closed, you open it; if it is open, you close it. For example, after the first pass every door is open; on the second pass you only toggle the even-numbered lockers (#2. #4, ... ) so that after the second pass the even doors are closed and the odd ones are open; the third time through. you close the door of locker #3 ( opened from the first pass). open the door of locker #6 (closed from the second pass), and so on. After the last pass, which locker doors arc open and which arc closed? How many of them are open?
     */
    int doors;
    cout << "Enter the number of doors in the hallway: ";
    cin >> doors;

    bool hallway[doors];

    // assigning all the default values: every door is open
    // on first pass
    for (int i = 0; i < doors; i++)
    {
        hallway[i] = true;
    }

    // second pass: even doors are closed, odd ones are open
    for (int i = 0; i < doors; i++)
    {
        if ((i + 1) % 2 == 0)
        {
            // hallway[door] = (hallway[door] == true)? false: true;
            hallway[i] = false;
        }
    }
    for (int i = 0; i < doors; i++)
    {
        string result = (hallway[i] == true) ? "open\n" : "closed\n";
        cout << "door " << i + 1 << " - " << result;
    }

    // third pass - flipping all the doors
    for (int i = 0; i < doors; i++)
    {
        hallway[i] = (hallway[i] == true) ? false : true;
    }

    for (int i = 0; i < doors; i++)
    {
        string result = (hallway[i] == true) ? "open\n" : "closed\n";
        cout << "door " << i + 1 << " - " << result;
    }

    return 0;
}