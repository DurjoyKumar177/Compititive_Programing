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
        string mat = "";
        for (int i = 0; i < n; i++)
        {
            if (i % 2 != 0)
            {
                for (int j = 0; j < n; j++)
                {
                    if (j % 2 != 0)
                        mat = mat + "##";
                    else

                        mat = mat + "..";
                }
            }
            else
            {
                for (int j = 0; j < n; j++)
                {
                    if (j % 2 == 0)
                        mat = mat + "##";
                    else

                        mat = mat + "..";
                }
            }
            cout << mat << endl;
            cout << mat << endl;
            mat = "";
        }
    }

    return 0;
}