#include <bits/stdc++.h>
using namespace std;
int digits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int rem = n % 10;
        n = n / 10;
        sum += rem;
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int result = digits(n);
    cout << result;
}