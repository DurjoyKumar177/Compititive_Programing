#include <iostream>
#include <vector>

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

        int operations = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] != f[i])
            {
                // If the cat needs to be moved or added
                if (s[i + 1] == '0' && f[i + 1] == '1')
                {
                    // Move a cat from one box to another
                    s[i] = '1';
                    s[i + 1] = '0';
                    operations++;
                }
                else if (s[i + 1] == '1' && f[i + 1] == '0')
                {
                    // Remove a cat from a box and send it into retirement
                    s[i + 1] = '1';
                    operations++;
                }
            }
        }

        if (s[n - 1] != f[n - 1])
        {
            // Handle the last box separately
            if (s[n - 1] == '0' && f[n - 1] == '1')
            {
                // Take a new cat and place it in the last box
                operations++;
            }
            else if (s[n - 1] == '1' && f[n - 1] == '0')
            {
                // Remove a cat from the last box and send it into retirement
                operations++;
            }
        }

        cout << operations << endl;
    }

    return 0;
}
