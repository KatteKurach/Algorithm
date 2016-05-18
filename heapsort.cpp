#include <iostream>
#include <vector>

using namespace std;

int a[100000];

class Heap
{
    public:
        vector<int> a;

        Heap()
        {
        }

        int top()
        {
            return a[0];
        }

        void siftup(int i)
        {
            int index = i / 2 - (i % 2 == 0) ? 1 : 0;
            while(a[i] > a[index] && i > 0)
            {
                swap(a[i], a[index]);
                i = index; 
                index = i / 2 - (i % 2 == 0) ? 1 : 0;
            }
        }

        void push(int val)
        {
            a.push_back(val);
            siftup(a.size() - 1);
        }

        void pop()
        {
            swap(a[0], a[(int)a.size() - 1]);
            a.pop_back();
            siftdown(0);
        }

        void siftdown(int i)
        {
            int left = 2 * i + 1;            
            int right = 2 * i + 2;
            while(left < (int)a.size())
            {
               int max = left;

                if (right < (int)a.size() && a[right] > a[left])
                {
                    max = right;
                }
                if (a[i] < a[max])
                {
                    swap(a[i], a[max]);
                }
                i = max;
                left = 2 * i + 1;
                right = 2 * i + 2;
            }
        }

        void show(int u, int tab = 0) 
        {
            if (u >= (int)a.size()) 
            {
                return;
            }

            for (int i = 0; i < tab; i++) 
            {
                printf("~~");
            }
            printf("%d\n", a[u]);

            int left = u * 2 + 1;
            int right = u * 2 + 2;
            show(left, tab + 1);
            show(right, tab + 1);
        }

};

Heap heap;

void heapsort(int n, Heap h)
{
    for(int i = 0; i < n; i++)
    {
        a[i] = h.top();
        h.pop();
    }
}

int main()
{
    freopen("input", "r", stdin);
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        heap.push(temp);
    }

    heapsort(n, heap);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
