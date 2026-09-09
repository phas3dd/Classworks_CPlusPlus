#include <iostream>
using namespace std;

int main() {

    cout << "     a" << endl;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (i <= j)
            {
                cout << "# ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }

    cout << "     b" << endl;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (i == j)
            {
                cout << "# ";
            }
            else if (i > j)
            {
                cout << "# ";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << "     c" << endl;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i <= j)
            {
                cout << "# ";
            }
            else
            {
                cout << "  ";
            }
        }
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                cout << "# ";
            }
            else if (i < j)
            {
                cout << "# ";
            }
        }

        cout << endl;
    }

    cout << "     d" << endl;
    for (int i = 3; i < 6; i++)
    {
        for (int j = 3; j < 6; j++)
        {
            if (i >= j)
            {
                cout << "# ";
            }
            else
            {
                cout << "  ";
            }
        }
        for (int j = 3; j < 6; j++)
        {
            if (i == j)
            {
                cout << "# ";
            }
            else if (i < j)
            {
                cout << "# ";
            }
        }
        cout << endl;
    }

    cout << "     u" << endl;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (i == j)
            {
                cout << "# ";
            }
            else if (i < j)
            {
                cout << "# ";
            }
        }
        cout << endl;
    }


    cout << endl;
}