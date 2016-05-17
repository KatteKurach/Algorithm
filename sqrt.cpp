#include <iostream>
#include <math.h>

using namespace std;

int g(int x, int length)
{
    return x / length + x % length ? 1 : 0;
}

int main()
{
    freopen("input", "r", stdin);

    int n;
    cin >> n;

    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    int length = sqrt(n);
    int k = n / length;
    k += n % length ? 1 : 0;

    int f[k];
    int index = 1;

    for (int i = 1; i <= k; i++)
    {
        int m = -100000;   
        for (int j = index ; j <= index + length - 1; j++)
        {
            m = max(m, a[j]);  
        }
        index += length;
        f[i] = m;
    }
    
    int l, r;
    cin >> l >> r;

    int res = -10000;

    for (int i = g(l, length) + 1; i < g(r, length); i++)
    {
        res = max(res, f[i]);
    }

    for (int i = l; i % length != 0 && i <= r; i++)
    {
        res = max(res, a[i]);
    }

    for (int i = r; i % length != 0 && i >= l; i--)
    {
        res = max(res, a[i]);
    }
    
    cout << res;
}
