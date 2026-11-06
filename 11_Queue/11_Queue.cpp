#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;

struct Element
{
    string name;
    int priority;
    void Print()
    {
        cout << name << " : " << priority << " | ";
    }
};
class QueueWithPriority
{
    Element* elements;
    int count;
public:
    QueueWithPriority() : elements(nullptr), count(0) {}
    ~QueueWithPriority()
    {
        if (elements != nullptr)delete[]elements;
    }
    void Enqueue(Element el)
    {
        int index = 0;
        while (index < count && elements[index].priority < el.priority)index++;
        Element* temp = new Element[count + 1];
        for (int i = 0; i < index; i++)
        {
            temp[i] = elements[i];
        }
        temp[index] = el;
        for (int i = index; i < count; i++)
        {
            temp[i + 1] = elements[i];
        }
        if (elements != nullptr)
        {
            delete[]elements;
        }
        elements = temp;
        count++;
    }
    bool IsEmpty()const
    {
        return count == 0;
    }
    Element Dequeue()
    {
        if (!IsEmpty())
        {
            Element first = elements[0];
            for (int i = 0; i < count; i++)
            {
                elements[i] = elements[i + 1];
            }count--;
            return first;
        }
    }
    void Print()
    {
        cout << "------------------ Queue -------------" << end;
        for (int i = 0; i < count; i++)
        {
            elements[i].Print();
        }
        cout << endl;
        cout << "__________________________________" << endl;
    }
};