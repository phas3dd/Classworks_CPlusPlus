#include <iostream>
#include <Windows.h>
using namespace std;

struct Coord
{
    int x;
    int y;
};

class Rectangle
{
    int width;
    int height;
    string symbol;
public:
    Rectangle()
    {
        width = 00;
        height = 00;
        symbol = "N/A";
    }
    Rectangle(int size, string symbol)
    {
        width = size;
        height = size;
        this->symbol = symbol;
    }
    Rectangle(int width, int height, string symbol)
    {
        this->width = width;
        this->height = height;
        this->symbol = symbol;
    }
    void Print()
    {
        for (int i = 0; i < height; i++) {
        
            for (int j = 0; j < width; j++) {
                cout << symbol;
            }
            cout << endl;
        }
    }
    void ChangeSize(int width, int height)
    {
        this->width = width;
        this->height = height;
    }
    //void MoveRectangle(int x, int y)
    //{
    //    COORD c;
    //    c.X = x;
    //    c.Y = y;
    //    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
    //}
};

int main()
{
    Rectangle rectangle1(5, "#");
    // Print
    rectangle1.Print();
    cout << endl;
    // ChangeSize
    rectangle1.ChangeSize(4, 6);
    rectangle1.Print();
    cout << endl;
    // MoveRectangle
    rectangle1.
}