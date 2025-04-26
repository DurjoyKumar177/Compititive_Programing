#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string c;
        cin >> c;
        int A = 0, B = 0;
        for (auto e : c)
        {
            if (e == 'A')
            {
                A++;
            }
            else
                B++;
        }

        if (A > B)
            cout << "A" << endl;
        else
            cout << "B" << endl;
    }

    return 0;
}