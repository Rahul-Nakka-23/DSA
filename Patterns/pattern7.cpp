/*
   *
  ***
 ******
********

*/
#include <bits/stdc++.h>
using namespace std;
void print1(int n)
{
    for (int i = 0; i < n; i++) // no of rows
    {
        // spaces

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // start

        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 0; j < n - i - 1; j++)
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
    print1(n);
}