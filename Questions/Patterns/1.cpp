/*
Enter the N : 5
 *  *  *  *  *
 *  *  *  *  *
 *  *  *  *  *
 *  *  *  *  *
 *  *  *  *  *
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the N : 5";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }

    return 0;
}