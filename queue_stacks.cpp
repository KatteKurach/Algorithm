#include <iostream>

using namespace std;

class Node
{
    public:
        pair<int, int> value;
        Node *next;

        Node()
        {

        }

        Node(int val, int min)
        {
            value = make_pair(val, min);
        }
};

class Stack
{
    public:
        int size;
        Node *first;

        Stack()
        {
            size = 0;
            first = NULL;
        }

        void push(int val)
        {
            if (size == 0)
            {
                Node *newNode = new Node(val, val);
                first = newNode;
            }else
            {
                Node *newNode = new Node(val, min(val, first -> value.second));
                newNode -> next = first;
                first = newNode;
            }
            size++;
        }

        void pop()
        {
            if(size == 0)
            {
            }else
            {
                Node *temp;
                temp = first -> next;
                delete first;
                first = temp;
                size--;
            }
        }

        int top()
        {
            if (size != 0)
            {
                int ans = first -> value.first;
                return ans;
            }
        }

        int gmin()
        {
            if (size == 0)
            {
                return 0;
            }

            return first -> value.second;
        }

        bool isEmpty()
        {
            if (size == 0)
            {
                return true;
            } else
            {
                return false;
            }
        }

        void print()
        {
            Node *cur;
            cur = first;
            for (int i = 0; i < size; i++)
            {
                cout << cur -> value.first << "";
                cur = cur -> next;
            }
        }

};

class Queue
{
    public:
        int size;
        Stack s1;
        Stack s2;
    Queue()
    {
        size = 0;
    }

    void push(int value)
    {
        s1.push(value);
        size++;
    }

    void pop()
    {
        if (s2.isEmpty())
        {
            while (!s1.isEmpty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        s2.pop();
        size--;
    }

    int getMin()
    {
        if (s1.isEmpty())
        {
            return s2.gmin();
        }

        if (s2.isEmpty())
        {
            return s1.gmin();
        }

        if ( s2.gmin() < s1.gmin())
        {
            return s2.gmin();
        } else
        {
            return s1.gmin();
        }
    }

    void print()
    {
        s2.print();
    }
};


int main()
{
    Queue q;
    q.push(5);
    q.push(6);
    q.push(7);
    q.pop();
    q.print();
    cout << q.getMin();
}
