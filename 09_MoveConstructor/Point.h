#pragma once
#include <iostream>
using namespace std;

class Point
{
private:
    int x, y;
public:
    Point()
    {
        x = y = 0;
    }
    Point(int x, int y)
    {
        this->x;
        this->y;
    }
    void Print()
    {
        cout << "X = " << x;
        cout << "Y = " << y;
    } 
    Point operator++()
    {
        this->x++;
        this->y++;
        return *this;
    }
    Point operator--()
    {
        this->x--;
        this->y--;
        return *this;
    }
    bool operator>(const Point &other)
    {
        return ((this->x + this->y) > (other.x + other.y));
    } 
    bool operator<(const Point& other)
    {
        return ((this->x + this->y) < (other.x + other.y));
    }
    Point operator!()
    {
        this->x = y;
        this->y = x;
        return *this;
    }
};