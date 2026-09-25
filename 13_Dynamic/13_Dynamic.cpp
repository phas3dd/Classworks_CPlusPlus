#include <iostream>
using namespace std;

int* CreateArray(int size)
{
    int* arr = new int[size];
    return arr;
}
void InitArray(int* arr, int size)
{
    srand(time(0));
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
    }
}
void ShowArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}
int* AddNewNumber(int* arr, int* size, int index, int number)
{
    int* temp = new int[*size + 1];
    for (int i = 0; i < index; i++)
    {
        temp[i] = arr[i];
    }
    temp[index] = number;
    for (int i = index; i < *size; i++) {
        temp[i + 1] = arr[i];
    }
    delete[]arr;
    arr = temp;
    (*size)++;
    return arr;
}
int* RemoveLastNumber(int* arr, int* size)
{
    int* temp = new int[*size - 1];
    for (int i = 0; i < *size - 1; i++)
    {
        temp[i] = arr[i];
    }
    delete[]arr;
    arr = temp;
    (*size)--;
    return arr;
}



int main() {
    int* pnum1 = new int(4);
    float* pnum2 = new float(7.3);
    double* pnum3 = new double(8.2);

    double product = *pnum1 * *pnum2 * *pnum3;

    cout << *pnum1 << "  " << *pnum2 << "  " << *pnum3 << endl;
    cout << "Product: " << product << endl;

    // zav 2

    int index;
    int number;
    int size;
    cout << "Enter size: "; cin >> size;
    cout << endl;
    int* arr = CreateArray(size);
    InitArray(arr, size);
    cout << "Adress of massive: " << arr << endl;
    cout << "Massive: ";
    ShowArray(arr, size);
    cout << endl;
    cout << "Add new number: " << endl;
    cout << "Enter position: "; cin >> index;
    cout << "Enter new number: "; cin >> number;
    arr = AddNewNumber(arr, &size, index, number);
    cout << "New massive: ";
    ShowArray(arr, size);
    cout << endl;
    cout << "Success! Removed last number :" << endl;
    arr = RemoveLastNumber(arr, &size);
    cout << "New massive: ";
    ShowArray(arr, size);

}