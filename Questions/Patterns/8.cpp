/*
Enter the N : 5
*********
 *******
  *****
   ***
    *
*/

#include <bits/stdc++.h>
using namespace std;
void print(int n)
{

    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * n) - 1 - (2 * i); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the N : ";
    cin >> n;
    print(n);
    return 0;
}