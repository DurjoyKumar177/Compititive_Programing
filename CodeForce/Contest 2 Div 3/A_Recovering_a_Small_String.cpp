#include <bits/stdc++.h>

using namespace std;

char conv(int num)
{
    return 'a' + num - 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int tc, sc, fc;
        int N;
        cin >> N;
        if (N - 2 < 26)
        {
            tc = N - 2;
            N = N - tc;
        }
        else
        {
            tc = 26;
            N = N - tc;
        }

        if (N - 1 < 26)
        {
            sc = N - 1;
            N = N - sc;
        }
        else
        {
            sc = 26;
            N = N - tc;
        }

        if (N < 26)
        {
            fc = N;
        }
        else
        {
            fc = 26;
        }
        cout << conv(fc) << conv(sc) << conv(tc) << endl;
    }

    return 0;
}