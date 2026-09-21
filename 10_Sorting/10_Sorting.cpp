#include <iostream>
using namespace std;

void SortItems(int arr[], int size, int parametr)
{
    if (parametr == 0)
    {
        int temp, index;
        for (int i = 0; i < size; i++)
        {
            index = i;
            temp = arr[i];
            for (int j = i + 1; j < size; j++)
            {
                if (arr[j] < temp) {
                    temp = arr[j];
                    index = j;

                }
            }
            if (index != i)
            {
                arr[index] = arr[i];
                arr[i] = temp;
            }
            cout << arr[i] << " ";
        }
    }
    else if (parametr == 1)
    {
        int temp1, index1;
        for (int k = 0; k < size; k++)
        {
            index1 = k;
            temp1 = arr[k];
            for (int l = k + 1; l < size; l++)
            {
                if (arr[l] > temp1) {
                    temp1 = arr[l];
                    index1 = l;

                }
            }
            if (index1 != k)
            {
                arr[index1] = arr[k];
                arr[k] = temp1;
            }
            cout << arr[k] << " ";
        }
    }
    else
    {
        cout << "Incorrect choice." << endl;
    }

}

int main() {

    int parametr;

    cout << "\t\tSort items" << endl;
    cout << "0 - In ascending order" << endl;
    cout << "1 - In descending order" << endl;
    cout << "\tEnter your choice: ";
    cin >> parametr;

    cout << "Not sorted massive: ";

    srand(time(0));

    const int size = 9;
    int arr[size];

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 10;
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "Sorted massive: ";

    SortItems(arr, size, parametr);

}