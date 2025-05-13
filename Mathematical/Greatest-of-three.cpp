#include <bits/stdc++.h>
using namespace std;
void greatest(int a, int b, int c)
{
    if (a > b && a > c)
    {
        cout << a << " is greater";
    }
    else if (b > a && b > c)
    {
        cout << b << " is greater";
    }
    else
    {
        cout << c << " is greater";
    }
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    greatest(a, b, c);
}