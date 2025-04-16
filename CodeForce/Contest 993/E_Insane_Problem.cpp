#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;

        vector<ll> pows;
        
        ll pow = 1;

        while (pow <= r2)
        {
            pows.push_back(pow);
            if (pow > r2 / k)
                break;
            pow *= k;
        }

        ll count = 0;

        for (auto p : pows)
        {
            ll y = max(l1, l2  / p);

            ll x = min(r1, r2 / p);

            if (y <= x)
            {
                count += (x - y + 1);
            }
        }

        cout << count << "\n";
    }

    return 0;
}
