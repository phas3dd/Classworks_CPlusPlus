#include <iostream>
#include <windows.h> 
using namespace std;

void gotoxy(int x, int y)
{
    COORD coordinate;
    coordinate.X = x;
    coordinate.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}
struct Point
{
    int x;
    int y;
    Point() : x(0), y(0) {}
    Point(int x, int y) : x(x), y(y) {}

};
class Shape
{
    string type;
public:
    Shape() : type("no type") {}
    Shape(string type) : type(type) {}
    virtual void Print()const
    {
        cout << "Type: " << type << endl;
    }
};
class Line : public Shape
{

    Point start;
    Point end;
public:
    Line() : Shape(){}
    Line(string type, Point start, Point end) : start(start), end(end), Shape(){}
    void Print()
    {
        Shape::Print();
        cout << "Point 1 | X - " << start.x << "Y - " << start.y << endl;
        cout << "Point 2 | X - " << end.x << "Y - " << end.y << endl;
        gotoxy(start.x, start.y); cout << "*";
        gotoxy(end.x, end.y); cout << "*";
    }
};
class Rectangle : public Shape
{
    Point start;
    int width;
    int length;
public:
    Rectangle() : width(0), length(0), Shape() {}
    Rectangle(string type, Point start, int width, int length) : start(start), width(width), length(length), Shape() {}
    void Print()
    {
        Shape::Print();
        cout << "Start point | " << 
    }
};
int main()
{
    Point start = { 5, 7 };
    Point end = { 15, 15 };
    cout << "Point 1: x = " << start.x << " y = " << start.y << endl;
    cout << "Point 2: x = " << end.x << " y = " << end.y << endl;
    gotoxy(start.x, start.y); cout << "*";
    gotoxy(end.x, end.y); cout << "*";
}