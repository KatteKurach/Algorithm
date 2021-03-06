#include <iostream>
#include <vector>

using namespace std;

class Stack
{
    public:
        vector<int>  stack;
        int size;

        Stack()
        {
            size = 0;
        }

        void push(int val)
        {
           stack.push_back(val);
           size++;
        }

        int top()
        {
            if (size > 0)
            {
                int topS = stack.back();
                return topS;
            } else
            {
                return 0;
            }
        }

        void pop()
        {
            if (size > 0)
            {
                stack.pop_back();
                size--;
                return;
            }
        }

        bool empty()
        {
            if (size > 0)
            {
                return false;
            } else
            {
                return true;
            }
        }
};

int main()
{
    Stack c;
    c.push(2);
    c.push(13);
    cout << c.top() << endl;
    c.pop();
    cout << c.top() << endl;
    c.pop();
    cout << c.empty() << endl;

}

