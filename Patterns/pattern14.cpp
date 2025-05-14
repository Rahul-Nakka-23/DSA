/*

A
AB
ABC
ABCD
ABCDE

*/
#include <bits/stdc++.h>
using namespace std;
void print(int n)
{
    char ch = 'A';

    for (int i = 1; i <= n; i++) // for no of rows
    {
        // characters
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
            ch++;
        }
        // spaces
        for (int j = n - 1; j >= 1; j--)
        {
            cout << " ";
        }
        cout << endl;
        ch = 'A';
    }
}
int main()
{
    int n;
    cin >> n;
    print(n);
}