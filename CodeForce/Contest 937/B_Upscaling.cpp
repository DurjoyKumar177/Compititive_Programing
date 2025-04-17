#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string mat[n * 2][n * 2];

        for (int i = 0; i < n * 2; i = i + 2)
        {
            {
                for (int j = 0; j < n; j++)
                {
                    if (j % 2 == 0)
                    {
                        mat[i][j] = "##";
                        mat[i + 1][j] = "##";
                    }
                    else
                    {
                        mat[i][j] = "..";
                        mat[i + 1][j] = "..";
                    }
                }
            }
        }

        for (int i = 0; i < n * 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << mat[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}