#include <bits/stdc++.h>
using namespace std;
void sum_of_numbers(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum;
}
int main()
{
    int n;
    cin >> n;
    sum_of_numbers(n);
}