#include <iostream>
#include <iomanip>
using namespace std;

void InitArray(int** arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = rand() % 90 + 10;
        }
    }
}
void ShowArray(int** arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << setw(4) << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "===================================\n\n" << endl;
}
void FillOneRow(int* arr, int cols)
{
    for (int i = 0; i < cols; i++)
    {
        arr[i] = rand() % 10;
    }
}
int** AddRowToTheStart(int** arr, int& rows, int cols)
{
    int** temp = new int* [rows + 1];
    for (int i = 0; i < rows; i++) {
        temp[i + 1] = arr[i];
    }
    temp[0] = new int[cols];
    FillOneRow(temp[0], cols);
    delete[]arr;
    rows++;
    return temp;
}
int** DeleteRow(int** arr, int& rows, int cols)
{
    int** temp = new int* [rows - 1];
    for (int i = 1; i < rows; i++)
    {
        temp[i - 1] = arr[i];
    }
    delete[] arr[0];
    delete[]arr;
    rows--;
    return temp;
}
int** DeleteRowByPos(int** arr, int& rows, int cols, int pos)
{
    int** temp = new int* [rows-1];
    for (int i = 0; i < pos; i++)
    {
        temp[i] = arr[i];
    }
    delete[] arr[pos];
    for (int i = pos; i < rows; i++)
    {
        temp[i] = arr[i + 1];
    }
    rows--;
    return temp;
}


int main() {
    int rows = 3;
    int cols = 5;
   // cout << "Enter count rows: "; cin >> rows;
   // cout << "Enter count cols: "; cin >> cols;
    cout << endl;
    cout << "Massive: " << endl;
    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }
    InitArray(arr, rows, cols);
    ShowArray(arr, rows, cols);

    // zav 1

    cout << "Added new row in the start: " << endl;
    arr = AddRowToTheStart(arr, rows, cols);
    ShowArray(arr, rows, cols);

    // zav 2

    cout << "Deleted row in the start: " << endl;
    arr = DeleteRow(arr, rows, cols);
    ShowArray(arr, rows, cols);

    // zav 3

    cout << "Deleted row by pos: " << endl;
    arr = DeleteRowByPos(arr, rows, cols, 1);
    ShowArray(arr, rows, cols);
        
}