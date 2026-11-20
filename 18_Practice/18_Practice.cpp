#include <iostream>
using namespace std;

enum Type_Engine { None_e, Gasoline, Diesel, Electric, Hybrid};
enum Body { None_b, Sedan, Hatchback, Liftback, Coupe, Convertible, Universal, SUV, Crossover, Pickup, Minivan, Limousine, Van};
class Engine
{
    string name;
    Type_Engine type;
    float volume;
public:
    Engine() : type(None_e), name("no name"), volume(0) {}
    Engine(Type_Engine t, string n, float v) : type(t), name(n), volume(v) {}
    void ShowInfo()
    {
        cout << "\t--- Engine ---" << endl;
        cout << "Engine: " << name << " " << volume << endl;
        cout << "Type: " << type << endl;
    }
};
class Car
{
    Engine engine;
    Body body;
    string 
};