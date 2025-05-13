#include <bits/stdc++.h>
using namespace std;
void range(int a, int b)
{
    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        sum += i;
    }
    cout << sum;
}
int main()
{
    int a, b;
    cin >> a >> b;
    range(a, b);
}