#include <iostream>
#include <math.h>

using namespace std;
const int N = 100000;

int logg[N + 1];

void calc_log() 
{
    int cur = 1;
    int cur_power = 0;

    for (int i = 0; i <= N; i++) 
    {
        while (cur * 2 < i) 
        {
            cur *= 2;
            cur_power++;
        }
        
        logg[i] = cur_power;
    }
}

int main()
{
    calc_log();

    freopen("input", "r", stdin);
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int s = 2;
    int l = 0;

    while (s <= n)
    {
        s = pow(2, l);
        l++;
    }

    int sheet[n][l + 1];

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0)
            {
                sheet[j][i] = a[j];
            } else
            {
                sheet[j][i] = max(sheet[j][i - 1], sheet[j + (int)pow(2, i - 1)][i - 1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < l; j++)
        {
            cout << sheet[i][j] << " ";
        }
        cout << endl;
    }

    int le, r;
    cin >> le >> r;
    
    int d = r - le + 1;

    cout << max(sheet[le][logg[d]], sheet[r - logg[d] + 1][logg[d]]);
}

