#include <iostream>

using namespace std;

int main()
{
    freopen("input", "r", stdin);
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int cur = 0;
    int min = a[0];
    int index = 0;

    while(cur != n)
    {
        for (int i = cur; i < n; i++)
        {
            if (a[i] <= min)
            {
                index = i;
                min = a[i];
            }
        }
        swap(a[cur], a[index]);
        cur++;
        if (cur != n)
        {
            min = a[cur];
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

}

