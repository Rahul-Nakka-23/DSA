#include <bits/stdc++.h>
using namespace std;
void leap(int n)
{
    if (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0))
    {
        cout << n << " is a leap year";
    }
    else
    {
        cout << n << " is not a leap year";
    }
}
int main()
{
    int n;
    cin >> n;
    leap(n);
}