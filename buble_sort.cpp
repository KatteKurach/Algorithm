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

    while (true)
    {
        bool flag = false;

        for (int i = 0; i < n; i++)
        {
            if (a[i] > a[i + 1])
            {
                swap(a[i], a[i + 1]);
                flag = true;
            }
        }

        if (!flag)
        {
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

