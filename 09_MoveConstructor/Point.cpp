#include "Point.h"

Point::Point()
{
    int x, y;
    cin >> x; cin >> y;

    string Operation;
    cout << "Enter operation: ";
    cin >> Operation;
    if (Operation == "++")
    {
        operator++;
    }
    else if (Operation == "--")
    {
        operator--;
    }
    else if (Operation == ">")
    {
        operator>;
    }
    else if (Operation == "<")
    {
        operator<;
    }
    else if (Operation == "!")
    {
        operator!;
    }

}