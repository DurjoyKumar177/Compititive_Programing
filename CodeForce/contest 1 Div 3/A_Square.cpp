#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x[5], y[5];

        for (int i = 1; i <= 4; i++)
        {
            cin >> x[i] >> y[i];
        }

        for (int i = 2; i <= 4; i++)
        {
            if (x[1] == x[i])
            {
                cout << pow((y[i] - y[1]), 2);
                break;
            }
        }
        cout << endl;
    }

    return 0;
}
