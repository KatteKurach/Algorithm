#include <iostream>

using namespace std;

class Heap()
{
    public:
        int a[1000000];
        int tail;

        Heap()
        {
            tail = 0;
        }
        
        void siftup(int i)
        {
            while (a[i] < a[(i -1) / 2])
            {
                swap(a[i], a[(i - 1) / 2]);
                i = (i - 1) / 2;
            }
        }

        void insert(int value)
        {
            a[tail] = value;
            siftup(tail);
            tail++;
        }

        int top()
        {
            return a[0];
        }
        
        void siftdown(int i)
        {
            while i * 2 + 1 < tail
            {
                int left = i * 2 + 1;
                int right = i *2 + 2;
                int j = left;

                if (right < tail) && (a[right] < a[left])
                {
                    j = right;
                }
                if (a[i] <= a[j])
                {
                    break;
                }
                swap(a[i], a[j]);
                i = j;
            }
        }

        void delete()
        {
            swap(a[0], a[tail]);
            siftdown(0);
            tail--;
        }
};

int main()
{

}



