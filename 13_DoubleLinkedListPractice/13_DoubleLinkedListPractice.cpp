#include <iostream>
using namespace std;

template<typename T>
class List
{
    struct Node
    {
        Node* prev;
        T value;
        Node* next;
        Node() :prev(nullptr), value(0), next(nullptr) {}
        Node(Node* p, T v, Node* n) :prev(p), value(v), next(n) {}
    };
private:
    Node* head;
    Node* tail;
public:
    List()
    {
        head = tail = nullptr;
    }
    bool IsEmpty()const
    {
        return head == nullptr;
    }
    void AddToHead(T value)
    {
        Node* newNode = new Node(nullptr, value, head);
        if (IsEmpty())
        {
            head = tail = newNode;
        }
        else
        {
            head->prev = newNode;
            head = newNode;
        }
    }
    void Print()
    {
        for (Node* i = head; i != nullptr; i = i->next)
        {
            cout << i->value << " ";
            cout << endl;
        }
    }
    ~List() {
        Node* current = nullptr;
        while (head != nullptr)
        {
            current = head;
            head = head->next;
            delete current;
        }
    }
    void AddToTail(T value)
    {
        Node* newNode = new Node(tail, value, nullptr);
        if (IsEmpty())
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    void DeleteFromHead()
    {
        if (IsEmpty())return;
        if (head->next == nullptr)
        {
            delete head;
            head = tail = nullptr;
        }
        else
        {
            head = head->next;
            delete head->prev;
            head->prev = nullptr;
        }
    }
    void DeleteFromTail()
    {
        if (IsEmpty())return;
        if (tail->prev == nullptr)
        {
            delete head;
            head = tail = nullptr;
        }
        else
        {
            tail = tail->prev;
            delete tail->next;
            tail->next = nullptr;
        }
    }
};    
struct Vagon
{
    int number;
    int seats;
    int passengers;
    Vagon() :number(), seats(), passengers() {}
    Vagon(int number, int seats, int passengers) :number(number), seats(seats), passengers(passengers) {}

};
ostream& operator << (ostream& out, const Vagon& v) {
    out << "[Vagon #" << v.number << " | Seats: " << v.seats << " | Passengers: " << v.passengers << "]";
    return out;
}
class Train
{


public:

    string model;
    List<Vagon> vagons;
    int countVagons = 0;

    void AddVagonToHead(Vagon v)
    {
        vagons.AddToHead(v);
        countVagons++;
    }
    void AddVagonToTail(Vagon v)
    {
        vagons.AddToTail(v);
        countVagons++;
    }
    void DeleteFromHead()
    {
        vagons.DeleteFromHead();
        countVagons--;
    }
    void DeleteFromTail()
    {
        vagons.DeleteFromTail();
        countVagons--;
    }
    void Print()
    {
        cout << "Train model: " << model << " (Vagons: " << countVagons << ")\nVagons line-up:\n";
        vagons.Print();
    }
    void InputModel()
    {
        cin >> model;
    }
};

int main() {
    Train paravoz;
    paravoz.model = "Siemens-123";

    for (int i = 1; i <= 5; i++) {
        Vagon v(i, 50, i * 7);
        paravoz.AddVagonToTail(v);
    }

    paravoz.Print();

}