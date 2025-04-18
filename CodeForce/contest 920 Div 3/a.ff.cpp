#include <bits/stdc++.h>

using namespace std;

int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    //{
    int x[4], y[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> x[i] >> y[i];
    }

    int ans;
    int l = (((x[0] * y[1]) + (x[1] * y[2]) + (x[2] * y[3]) + (x[3] * y[0])));
    int r = (((x[1] * y[0]) + (x[2] * y[1]) + (x[3] * y[2]) + (x[0] * y[3])));
    // ans = 0.5 * abs(l - r);

    cout << l << endl;
    cout << r << endl;
    //}

    return 0;
}
