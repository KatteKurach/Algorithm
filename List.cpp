#include <iostream>

using namespace std;

class Node
{
    public:
        int value;

        Node *next;
        Node *prev;

        Node(int val)
        {
            value = val;
        }

        Node()
        {

        }
};

class List
{
    public:
        Node *first;
        Node *last;
        int size;

        List()
        {
            first = NULL;
            last = NULL;
            size = 0;
        }

        void push_back(int val)
        {
            Node *newNode = new Node(val);
            if (size == 0)
            {
                first = newNode;
                last = newNode;
            } else 
            {
                last -> next = newNode;
                newNode -> prev = last;
                newNode -> next = NULL;
                last = newNode;
            }
            size++;
        }


        void push_front(int val)
        {
            Node *newNode = new Node(val);
            
            if (size == 0)
            {
                first = newNode;
                last = newNode;
            } else 
            {
               first -> prev = newNode;
               newNode -> next = first;
               newNode -> prev = NULL;
               first = newNode;
            }
            size++;
        }


        void pop_back()
        {
            if (size != 0)
            {
                Node *temp;

                temp = last -> prev;
                delete last;
                last = temp;
                size--;
                return;
            } 
            if (size == 1)
            {
                delete last;
                last = NULL;
                first = NULL;
                size--;
            }
        }


        void pop_front()
        {
            if (size != 0)
            {
                Node *temp;
                temp = first -> next;
                delete first;
                first = temp;
                size--;
                return;
            }
            if (size == 1)
            {
                delete first;
                last = NULL;
                first = NULL;
                size--;
            }
        }


        void insert(int pos, int val)
        {
            Node *cur;
            cur = first;
            Node *newPrev;

            if (pos == 0)
            {
                push_front(val);
                return;
            }

            if (pos == size + 1)
            {
                push_back(val);
                return;
            }

            for (int i = 0; i < pos; i++)
            {
                  cur = cur -> next;  
            }

            Node *newNode = new Node(val);

            newNode -> next = cur;
            newNode -> prev = cur -> prev;

            newPrev = cur -> prev;
            cur -> prev = newNode;
            newPrev -> next = newNode;
        }


        void erase(int pos)
        {
            Node *cur;
            Node *newNext;
            Node *newPrev;

            cur = first;
            if (pos >= size)
            {
                return;
            }

            if (pos == 0)
            {
                pop_front();
                return;
            }

            if (pos == size)
            {
                pop_back();
                return;
            }

            for (int i = 0; i < pos; i++)
            {
                cur = cur -> next;
            }
            newNext = cur -> next;
            newPrev = cur -> prev;
            delete cur;
            newNext -> prev = newPrev;
            newPrev -> next = newNext;
            size--;
        }

        bool empty()
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
                cout << cur -> value;
                cur = cur -> next;
            }
        }
        
        bool search(int val)
        {
            Node *cur;
            cur = first;

            for (int i = 0; i < size; i++)
            {
                if (cur -> value == val)
                {
                    return true;
                }
                cur = cur -> next;
            }
            return false;
        }

};


int main()
{
    List l;
    l.push_back(3);
    l.push_back(12);
    l.push_front(1);
    l.print();
    cout << l.search(12);
}
