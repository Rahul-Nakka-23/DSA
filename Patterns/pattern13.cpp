/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/

#include <bits/stdc++.h>
using namespace std;
void print(int n)
{
    int start = 1;
    for (int i = 1; i <= n; i++)
    {
        // numbers
        for (int j = 1; j <= i; j++)
        {

            cout << start;
            start++;
        }
        for (int j = n - 1; j <= 1; j--)
        {
            cout << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    print(n);
}