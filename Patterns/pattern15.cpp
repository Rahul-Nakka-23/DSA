/*

ABCDE
ABCD
ABC
AB
A

*/
#include <bits/stdc++.h>
using namespace std;
void print(int n)
{
    char ch = 'A';

    for (int i = n; i >= 1; i--) // for no of rows
    {
        // characters
        for (int j = i; j >= 1; j--)
        {
            cout << ch;
            ch++;
        }
        // spaces
        for (int j = 1; j <= n; j++)
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