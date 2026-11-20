#include <iostream>
#include <Windows.h>

using namespace std;
class Shape
{
private:
    string name;
    string type;
public:
    Shape() :name("no name"), type("no type") {}
    Shape(string name, string type) :name(name), type(type) {}
    void GetArea() {
        cout << "Area shape";
    }
    void Print()const
    {
        cout << "---------------Shape------------------" << endl;
        cout << "Name: " << name << endl;
        cout << "Type: " << type << endl;
    }
};
class Rectangle : public Shape
{
    int height;
    int width;
public:
    Rectangle() : height(0), width(0), Shape(){}
    Rectangle(string name, string type, int height, int width) : height(height), width(width),Shape(name, type) {}
    void GetArea()
    {
        cout << "Area of rectangle: " << height * width << endl;
    }
};
class Circle : public Shape
{
    int size;
public:
    Circle() : size(0), Shape() {}
    Circle(string name, string type, int size) : size(size), Shape(name, type) {}
    void GetArea()
    {
        cout << "Area of circle: " << 3.14 * ((size / 2)*(size/2)) ;
    }
};
class Right_Triangle : public Shape
{
    int a;
    int b;
public:
    Right_Triangle() : a(0), b(0), Shape() {}
    Right_Triangle(string name, string type, int a, int b) : a(a), b(b), Shape(name, type) {}
    void GetArea()
    {
        cout << "Area of right triangle: " << (a * b) / 2;
    }
};
class Triangle : public Shape
{
    int a;
    int h;
public:
    Triangle() : a(0), h(0), Shape() {}
    Triangle(string name, string type, int a, int h) : a(a), h(h), Shape(name, type) {}
    void GetArea()
    {
        cout << "Area of triangle: " << (1/2) * a * h;
    }
};
class Trapezoid : public Shape
{
    int a;
    int b;
    int h;
public:
    Trapezoid() : a(0), b(0), h(0), Shape() {}
    Trapezoid(string name, string type, int a, int b, int h) : a(a), b(b), h(h), Shape(name, type) {}
    void GetArea()
    {
        cout << "Area of Trapezoid: " << ((a + b) / 2) * h;
    }

};
void TestShape(Shape shape)
{
    shape.Print();
    shape.GetArea();
}

int main()
{
    Trape car("BMW", 2024, 3.0);
    car.setSpeed(280);
    car.Drive();
    car.Print();

    PoliceCar police("Renault Duster", 2015, 1.6, 500);
    police.setSpeed(220);
    police.Print();
    police.Drive();
    police.BeepBeep();

    SportCar sport("Formula 1", 2025, 2.5, 100);
    sport.Print();
    sport.Drive();
    TestDrive(car);
    TestDrive(police);
    TestDrive(sport);
}
