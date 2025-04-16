#include<bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        string result;
        for (int i = s.size() - 1; i >= 0; --i) {
            if (s[i] == 'p')
                result += 'q';
            else if (s[i] == 'q')
                result += 'p';
            else if (s[i] == 'w')
                result += 'w';
        }

        cout << result << endl;
    }

    return 0;
}
