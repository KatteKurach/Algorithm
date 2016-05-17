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

    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0 && a[j - 1] < a[j]; j--)
        {
            swap(a[j], a[j - 1]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

