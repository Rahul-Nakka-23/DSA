#include <bits/stdc++.h>
using namespace std;

void prime(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << n << " is a prime";
    }
    else
    {
        cout << n << " is not a prime";
    }
}

int main()
{
    int n;
    cin >> n;
    prime(n);
}
