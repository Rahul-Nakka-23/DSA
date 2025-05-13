#include <bits/stdc++.h>
using namespace std;
void even_or_odd(int n)
{
    if (n % 2 == 0)
    {
        cout << n << " is even number";
    }
    else
    {
        cout << n << " is odd number";
    }
}
int main()
{
    int n;
    cin >> n;
    even_or_odd(n);
}