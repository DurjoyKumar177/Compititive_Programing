#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string time;
        cin >> time;
        int hr = stoi(time.substr(0, 2));
        int min = stoi(time.substr(3, 2));

        string indicator = "AM";
        if (hr >= 12)
        {
            indicator = "PM";
            if (hr > 12)
            {
                hr -= 12;
            }
        }
        if (hr == 0)
        {
            hr = 12;
        }

        if (hr < 10)
        {
            cout << "0";
        }
        cout << hr << ":";

        if (min < 10)
        {
            cout << "0";
        }
        cout << min << " " << indicator << endl;
    }
    return 0;
}
