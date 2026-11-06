#include <iostream>
#include <list>
using namespace std;

template<typename T>
class List
{
    struct Node
    {
        T data;
        Node* next;
        Node(T value, Node* next) :value(value), next(next) {}
    };

    Node* head;

public:
    List()
    {
        head = nullptr;
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
    void AddToHead(T value)
    {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }
    void AddToTail(T value)
    {
        Node* newNode = new Node(value, nullptr);
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            Node* current = head;
            while (current->next != nullptr)
            {
                current = current->next;
            }
            current->next = newNode;
        }
    }
    void DeleteFromTail()
    {
        if (head == nullptr)
        {
            return;
        }
        if (head->next == nullptr)
        {
            delete head;
            head = nullptr;
        }
        else {
            Node* current = head;
            while (current->next->next != nullptr)
            {
                current = current->next;
            }
            delete current->next;
            current->next = nullptr;
        }
    }
    void Print()
    {
        Node* current = head;
        while (current != nullptr)
        {
            cout << current->value << " ";
            current = current->next;
        }
        cout << endl;
    }
    bool IsEmpty() const 
    {
        return head == nullptr;
    }
};

class Point
{
    double x;
    double y;
public:
    Point()
    {

    }
};