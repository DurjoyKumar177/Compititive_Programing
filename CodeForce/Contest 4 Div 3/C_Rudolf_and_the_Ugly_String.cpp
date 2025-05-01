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
        string st;
        cin >> st;
        int count = 0;

        size_t pos1 = st.find("pie");
        size_t pos2 = st.find("map");

        while (pos1 != -1 || pos2 != -1)
        {
            if (pos1 != -1 && (pos2 == -1 || pos1 < pos2))
            {
                st.erase(pos1, 3);
                count++;
                pos1 = st.find("pie", pos1);
            }
            else
            {
                st.erase(pos2, 3);
                count++;
                pos2 = st.find("map", pos2);
            }
        }

        cout << count << endl;
    }

    return 0;
}
