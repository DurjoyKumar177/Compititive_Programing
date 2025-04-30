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
        vector<int> a(n);
        int sum = 0;

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            sum += a[i];
        }

        if (sum % n == 0)
        {
            int avg = sum / n;
            int i = 0, j = n - 1;
            int excess_water = 0;
            int need_water = 0;

            while (i < n)
            {
                if (excess_water < 0)
                {
                    break;
                }
                else if (a[i] >= avg)
                {
                    excess_water += a[i] - avg;
                    a[i] -= avg;
                }

                else if (a[i] <= avg)
                {
                    int need = avg - a[i];
                    a[i] = excess_water - need;
                    excess_water -= need;
                }

                i++;
            }

            bool flag = true;
            for (auto val : a)
            {
                if (val != avg)
                {
                    flag = false;
                    break;
                }
            }

            if (flag)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
