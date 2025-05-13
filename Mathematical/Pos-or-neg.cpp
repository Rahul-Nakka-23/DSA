#include <bits/stdc++.h>
using namespace std;
void pos_or_neg(int n)
{
    if (n == 0)
    {
        cout << n << "is neither postive nor negative";
    }
    else if (n > 0)
    {
        cout << n << "is positive ";
    }
    else
    {
        cout << n << "is negative";
    }
}
int main()
{
    int n;
    cin >> n;
    pos_or_neg(n);
}