#include <iostream>

using namespace std;

class Node
{
    public:
        int value;
        Node *next;

    Node()
    {

    }

    Node(int val)
    {
        value = val;
    }
};

class Queue
{
    public:
        int size;
        Node *first;
        Node *last;

    Queue()
    {
        size = 0;
        first = NULL;
        last = NULL;
    }

    void push(int val)
    {
        Node *newNode = new Node(val);
        
        if (size == 0)
        {
            first = newNode;
            last = newNode;
        }else
        {
            last -> next = newNode;
            newNode -> next = NULL;
            last = newNode;
        }
        size++;
    }

    void back()
    {
        Node *temp;

        temp = first -> next;
        delete first;
        first = temp;
        size--;
    }

    void print()
    {
        Node *cur;
        cur = first;
        for (int i = 0; i < size; i++)
        {
            cout << cur -> value;
            cur = cur -> next;
        }
    }

};


int main()
{
    Queue q;
    q.push(2);
    q.push(34);
    q.push(1);
    q.back();
    q.print();
}
