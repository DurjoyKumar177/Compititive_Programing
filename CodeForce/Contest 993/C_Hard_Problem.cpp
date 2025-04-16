#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long m, a, b, c;
        cin >> m >> a >> b >> c;

        long long row1 = min(a, m);
        long long rs1 = m - row1;
        row1 += min(c, rs1);

        long long row2 = min(b, m);
        long long rs2 = m - row2;
        row2 += min(c - (row1 - min(a, m)), rs2);

        cout << row1 + row2 << endl;
    }

    return 0;
}

