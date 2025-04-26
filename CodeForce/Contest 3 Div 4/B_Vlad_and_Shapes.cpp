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
        vector<string> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int c1 = -1;
        for (auto row : v)
        {
            int mc = 0;
            for (char ch : row)
            {
                if (ch == '1')
                {
                    mc++;
                }
            }

            if (mc == 0)
            {
                c1 = -1;
                continue;
            }

            if (c1 != -1)
            {
                if (mc == c1)
                {
                    cout << "SQUARE" << endl;
                }
                else
                {
                    cout << "TRIANGLE" << endl;
                }
                break;
            }
            c1 = mc;
        }
    }
    return 0;
}
