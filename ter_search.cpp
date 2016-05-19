#include <iostream>

using namespace std;

double f(int x)
{
    return x * x + 5 * x - 12;
}

int main()
{
    double l;
    double r;
    cin >> l >> r;

    double e = 0.05;

    while( r - l > e)
    {
        double m1 = r - (r - l) / 2;
        double m2 = l + (r - l) / 2;

        if (f(m1) < f(m2))
        {
            l = m1;
        } else
        {
            r = m2;
        }
    }

    cout << l;
}

