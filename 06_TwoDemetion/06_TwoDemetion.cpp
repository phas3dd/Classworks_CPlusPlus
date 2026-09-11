#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    srand(time(0));

    const int rows = 4;
    const int cols = 3;
    int arr[rows][cols]{};

    int c = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = rand() % 10;
            cout << arr[i][j] << "   ";
            if (arr[i][j] != 0) {
                c++;
            }
        }
        cout << endl;
    }
    cout << "Number of non-zero elements: " << c << endl;

    // zav 2

    const int rows1 = 3;
    const int cols1 = 3;
    int arr1[rows1][cols1]{};



    int count = 0;

    for (int k = 0; k < rows1; k++) {

        for (int l = 0; l < cols1; l++) {
            arr1[k][l] = rand() % 10;
            cout << arr1[k][l] << "   ";
            if (arr1[k][l] == 0) {
                count++;
            }
        }
        cout << endl;
    }
    cout << "Number of zero elements: " << count << endl;

    // zav 3

    const int rows2 = 7;
    const int cols2 = 3;
    int arr2[rows2][cols2]{};

    // zav 4

    const int rows3 = 4;
    const int cols3 = 5;
    int arr3[rows3][cols3]{};

    int count_pos = 0;

    for (int q = 0; q < rows3; q++) {

        for (int w = 0; w < cols3; w++) {
            arr3[q][w] = rand() % 20 - 10;
            cout << arr3[q][w] << "   ";
            if (arr3[q][w] > 0) {
                count_pos++;
            }
        }
        cout << endl;
    }
    cout << "Number of positive elements: " << count_pos << endl;

    // zav 5

    const int rows4 = 5;
    const int cols4 = 4;
    int arr4[rows4][cols4]{};

    int product_pos = 1;

    for (int n = 0; n < rows4; n++) {
        for (int m = 0; m < cols4; m++) {
            arr4[n][m] = rand() % 20 - 10;
            cout << arr4[n][m] << "   ";
            if (arr4[n][m] > 0) {
                product_pos *= arr4[n][m];
            }
        }
        cout << endl;
    }
    cout << "Product of positive elements: " << product_pos << endl;

    // zav 6

    const int rows5 = 5;
    const int cols5 = 4;
    int arr5[rows5][cols5]{};

    int product_neg = 1;

    for (int z = 0; z < rows5; z++) {

        for (int x = 0; x < cols5; x++) {
            arr5[z][x] = rand() % 20 - 10;
            cout << arr5[z][x] << "   ";
            if (arr5[z][x] < 0) {
                product_neg *= arr5[z][x];
            }
        }
        cout << endl;
    }
    cout << "Product of negative elements: " << product_neg << endl;

    // zav 7

    const int rows6 = 4;
    const int cols6 = 4;
    int arr6[rows6][cols6]{};

    int counter = 0;

    for (int a = 0; a < rows6; a++) {

        for (int s = 0; s < cols6; s++) {
            arr6[a][s] = rand() % 10;
            cout << arr6[a][s] << "   ";
            if (arr6[a][s] % 6 == 1) {
                counter++;
            }
        }
        cout << endl;
    }
    cout << "Number of numbers divisible by 6: " << counter << endl;

    // zav 8

    const int rows7 = 5;
    const int cols7 = 6;
    int arr7[rows7][cols7]{};
    int min;

    for (int v = 0; v < rows7; v++) {
        min = arr7[0][0];
        for (int b = 0; b < cols7; b++) {
            arr7[v][b] = rand() % 10;
            cout << arr7[v][b] << "   ";
            if (arr7[v][b] < min)
            {
                min = arr7[v][b];
            }
        }

        cout << endl;
    }
    cout << "Minimum number: " << min << endl;

    // zav 9

    const int rows8 = 5;
    const int cols8 = 6;
    int arr8[rows8][cols8]{};
    int max;

    for (int o = 0; o < rows8; o++) {
        max = arr8[0][0];
        for (int p = 0; p < cols8; p++) {
            arr8[o][p] = rand() % 10;
            cout << arr8[o][p] << "   ";
            if (arr8[o][p] > max)
            {
                max = arr8[o][p];
            }
        }

        cout << endl;
    }
    cout << "Maximum number: " << max << endl;

    // zav 10

    const int rows9 = 5;
    const int cols9 = 4;
    int arr9[rows9][cols9]{};
    int summa = 0;

    for (int g = 0; g < rows9; g++) {
        for (int h = 0; h < cols9; h++) {
            arr9[g][h] = rand() % 20 - 10;
            cout << arr9[g][h] << "   ";
            if (arr9[g][h] < 0)
            {
                summa += arr9[g][h];
            }
        }

        cout << endl;
    }
    cout << "Summa of all negative numbers: " << summa << endl;

}