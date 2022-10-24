#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row;
    int col;
    cout << "Enter the number of rows\n";
    cin >> row;
    col = row;
    for (int i = row; i >= 1; i--)
    {
        for (int j = 1; j <= col; j++)
        {
            if (j >= i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        col += 1;
        cout << "\n";
    }
    return 0;
}