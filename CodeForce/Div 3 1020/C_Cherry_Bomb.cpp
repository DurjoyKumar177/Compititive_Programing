#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        ll k;
        cin >> n >> k;

        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        ll x = -1;
        bool possible = true;

        for (int i = 0; i < n; i++)
        {
            if (b[i] != -1)
            {
                ll sum = a[i] + b[i];
                if (x == -1)
                {
                    x = sum;
                }
                else if (x != sum)
                {
                    possible = false;
                    break;
                }
            }
        }

        if (!possible)
        {
            cout << 0 << '\n';
            continue;
        }

        if (x == -1)
        {
            ll min_x = 0, max_x = 2 * k;
            for (int i = 0; i < n; i++)
            {
                min_x = max(min_x, a[i]);
                max_x = min(max_x, a[i] + k);
            }

            ll count = (max_x >= min_x) ? (max_x - min_x + 1) : 0;


            cout << count << '\n';
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (b[i] == -1)
                {
                    ll need = x - a[i];
                    if (need < 0 || need > k)
                    {
                        possible = false;
                        break;
                    }
                }
            }
            cout << (possible ? 1 : 0) << '\n';
        }
    }

    return 0;
}
