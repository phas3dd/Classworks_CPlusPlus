#include <iostream>
#include <fstream>
using namespace std;

const char* file = "D://text.txt";

void SaveToFile()
{
    ifstream check_file(file);
    if (check_file.is_open()) {
        cout << "File";
        check_file.close();
    }
    char row[50];
    ofstream out(file, ios_base::app);
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter row: "; cin >> row;
        out << row << endl;
    }
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

int main() {
    SaveToFile();
    ReadFromFile();
}