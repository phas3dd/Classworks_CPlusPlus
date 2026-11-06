#include <iostream>
#include <fstream>
using namespace std;

const char* file = "D://coord.txt";

class Point {
private:
    double x;
    double y;
    double z;
public:
    void InitPoint()
    {
        cout << "Enter X: "; cin >> x;
        cout << "Enter Y: "; cin >> y;
        cout << "Enter Z: "; cin >> z;
    }
    void PrintPoint()
    {
        cout << "X - " << endl;
        cout << "Y - " << endl;
        cout << "Z - " << endl;
    }
    void SaveToFile()
    {
        ifstream check_file(file);
        if (check_file.is_open()) {
            cout << "File";
            check_file.close();
        }
        ofstream out(file, ios_base::app);
        out.close();
    }
    void ReadFromFile()
    {
        char Text[250];
        ifstream in(file);
        if (in.is_open())
        {
            while (!in.eof())
            {
                in >> Text;
                cout << Text << endl;;
            }
        }
        in.close();
    }
