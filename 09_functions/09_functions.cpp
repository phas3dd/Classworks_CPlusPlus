#include <iostream>
using namespace std;

// zav 1

int IntMax2(int a, int b)
{
    return a > b ? a : b;
}
float FloatMax2(float a, float b)
{
    return a > b ? a : b;
}
double DoubleMax2(double a, double b)
{
    return a > b ? a : b;
}
int Max3(int a, int b, int c)
{
    int Max3 = max({a, b, c});
    return Max3;
}
int Min2(int a, int b)
{
    return a < b ? a : b;
}
int Min3(int a, int b, int c)
{
    int Min3 = min({ a, b, c });
    return Min3;
}

// zav 2

template<typename T>
float Average(T arr[], int size)
{
    int AverageMassive = 0;
    T summa = 0;
    for (int i = 0; i < size; i++)
    {
        summa = summa + arr[i];

    }
    return (float)summa / size;
}

// zav 3

template<typename T>
int MaxOneMassive(T arr[], int size)
{
    int maxx;
    maxx = arr[0][0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxx)
        {
            maxx = arr[i];
        }
    }
    return maxx;
}

//template<typename T>
//int MaxTwoMassive(T arr[], int rows, int cols)
//{
//    for (int i = 0; i < rows; i++)
//    {
//        int maxxx = arr[0][0];
//        for (int j = 0; j < cols; j++)
//        {
//            if (arr[i][j] > maxxx)
//            {
//                maxxx = arr[i][j];
//            }
//        }
//    }
//    return maxxx;
//}

int main()
{

    // zav 1

    cout << IntMax2(6, 5) << endl;
    cout << FloatMax2(3.2, 4.5) << endl;
    cout << DoubleMax2(53.2, 44) << endl;
    cout << Max3(53, 23, 45) << endl;
    cout << Min2(32, 11) << endl;
    cout << Min3(53, 23, 45) << endl;
 

    // zav 2
    
    int arr[] = { 17, 15, 23, 16, 5, 8, 3, 5, 16, 17 };
    cout << Average(arr, 10) << endl;

    // zav 3

    const int rows = 5;
    const int cols = 4;
    int arr1[rows][cols] = { 17, 15, 23, 16};

    cout << MaxOneMassive(arr, 10) << endl;
    cout << MaxTwoMassive(arr1, rows, cols) << endl;

}
