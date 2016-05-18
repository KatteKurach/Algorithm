#include <iostream>

using namespace std;
int a[10000];

void qsort(int l, int r)
{
    
}

int main()
{
    freopen("input", "r", stdin);
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    qsort(0, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

