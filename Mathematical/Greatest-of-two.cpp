#include <bits/stdc++.h>
using namespace std;
void greatest(int a, int b)
{
    if (a > b)
    {
        cout << a << "is greater";
    }
    else
    {
        cout << b << "is greater";
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    greatest(a, b);
}
