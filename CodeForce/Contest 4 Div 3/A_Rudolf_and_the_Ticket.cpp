#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, k;
        cin >> l >> r >> k;
        int lp[l], rp[r];
        int count = 0;

        for (int i = 0; i < l; i++)
        {
            cin >> lp[i];
        }
        for (int i = 0; i < r; i++)
        {
            cin >> rp[i];
        }

        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < r; j++)
            {
                if (lp[i] + rp[j] <= k)
                    count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}