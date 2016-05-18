#include <iostream>

using namespace std;

int main()
{
    int k;
    cin >> k;
    
    double l = 0;
    double r = k;
    double e = 0.04;

    while ( (r - l) > e)
    {
        double middle = (r + l) / 2.0;
        if (middle * middle * middle > k)
        {
            r = middle;
        } else
        {
            l = middle;
        }
    }


    cout << l;
}
