/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/
#include <bits/stdc++.h>
using namespace std;
void print1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i + 1; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    print1(n);
}