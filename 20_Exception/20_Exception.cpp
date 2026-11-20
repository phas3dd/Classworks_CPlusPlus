#include <iostream>
using namespace std;

class Stack {
private:
    enum { EMPTY = -1 };
    int* arr;
    int size;
    int topIndex;
public:
    Stack() = default;
    Stack(int size)
    {
        if (size > 0)
        {
            this->size = size;
            arr = new int[size];
            topIndex = EMPTY;
        }
        else
        {
            throw invalid_argument("Size < 0");
        }
    }
    ~Stack()
    {
        if (arr != nullptr)
            delete[]arr;
    }
    bool IsFull()
    {
        return topIndex == size - 1;
    }
    bool Push(int elem) {
        if (!IsFull())
        {
            arr[++topIndex] = elem;
            return true;
        }
        else
        {
            throw exception("Stack is full.");
        }
    }
    bool IsEmpty()
    {
        return topIndex == EMPTY;
    }
    int Pop()
    {
        if (!IsEmpty())
        {
            return arr[topIndex--];
        }
        else
        {
            throw exception("Stack is empty.");
        }
    }
    int GetCount()
    {
        return topIndex + 1;
    }
    void Clear()
    {
        topIndex = EMPTY;
    }
    int Peek()
    {
        if (!IsEmpty())
        {
            return arr[topIndex];
        }
        else
        {
            throw exception("Stack is peek.");
        }
    }
    void Print()
    {
        for (int i = 0; i <= topIndex; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

};
int main()
{
    Stack st(15);//10
    cout << "Size = " << st.GetCount() << endl;

    try
    {
        for (int i = 0; i < 30; i++)
        {
            st.Push(rand() % 50);
        }

        cout << "Size = " << st.GetCount() << endl;
        st.Print();
        while (!st.IsEmpty())
        {
            cout << "Delete element : " << st.Pop() << endl;
            st.Print();
        }
        cout << "Delete element : " << st.Pop() << endl;
        cout << "Delete element : " << st.Pop() << endl;
        cout << "Delete element : " << st.Pop() << endl;
        cout << "Size = " << st.GetCount() << endl;
    }
    catch (invalid_argument ex)
    {
        cout << "Size must be more than 0" << endl;
    }
    catch (exception ex)
    {
        cout << "Exception 1" << endl;
    }




}