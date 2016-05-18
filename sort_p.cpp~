#include <iostream>
#include <vector>

using namespace std;

int sorted[10000];
vector<int> v;

int main()
{
    freopen("input", "r", stdin);
    int n;
    cin >> n;

    int a[n];
    int max = 0;

    for (int i = 0; i < n; i++)
    {
        int temp;

        cin >> temp;
        a[i] = temp;
        
        if (temp > max)
        {
            max = temp;
        }
    }

    cout.flush();

    for(int i = 0; i < n; i++)
    {
        sorted[a[i]] += 1;
    }
   
    for (int i = 1; i <= max; i++)
    {
        int k = sorted[i];
        while (k != 0)
        {
            v.push_back(i);
            k--;
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

}

