#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];    
    }

    int b[n];
    int c[n];
    int k = 4;

    for (int i = 0; i < n; i++)
    {
        if (i % k)
        {
            b[i] = max(a[i], b[i - 1]);
        }else
        {
            b[i] = a[i];
        }
    }

    c[n - 1] = a[n - 1];
    k--;
    for (int i = n - 2; i >= 0; i++)
    {
        if (k != 0)
        {
            c[i] = max(a[i], c[i + 1]);
            k--;
        }else
        {
            c[i] = a[i];
            k = 4;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << c[i] << " ";
    }
}

