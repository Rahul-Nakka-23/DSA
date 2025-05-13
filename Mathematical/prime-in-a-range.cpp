#include <bits/stdc++.h>
using namespace std;
void range(int a, int b)
{

    for (int i = a; i <= b; i++)
    {
        int count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            cout << i << endl;
        }
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    range(a, b);
}