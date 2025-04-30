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

            while (i <= j)
            {
                int excess_water = a[i] - avg;
                int low_water = avg - a[j];

                if (excess_water > 0 && low_water > 0)
                {
                    int pour_water = min(excess_water, low_water);
                    a[i] -= pour_water;
                    a[j] += pour_water;
                }

                if (excess_water <= 0)
                {
                    i++;
                }
                if (low_water <= 0)
                {
                    j--;
                }
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
