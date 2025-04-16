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

        string s, f;
        cin >> s >> f;

        int take = 0;
        int keep = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] != f[i])
            {
                if (s[i] == '1')
                    take++;

                else if (f[i] == '1')
                    keep++;
            }
        }

        cout << max(take, keep) << endl;
    }
    return 0;
}
