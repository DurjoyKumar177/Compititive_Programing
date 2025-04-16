#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        vector<int> freq(n + 1, 0); // Frequency array for numbers from 1 to n
        int maxFreq = 0;           // Maximum frequency so far
        int currentMode = 0;       // Current mode of the sequence

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < n; ++i) {
            // Set b[i] to a[i] and update frequency
            b[i] = a[i];
            freq[b[i]]++;

            // Update the maximum frequency and current mode
            if (freq[b[i]] > maxFreq) {
                maxFreq = freq[b[i]];
                currentMode = b[i];
            }

            // If current mode doesn't match a[i], adjust to ensure a[i] is the mode
            if (currentMode != a[i]) {
                b[i] = a[i];
                freq[a[i]]++;
                maxFreq = freq[a[i]];
                currentMode = a[i];
            }
        }

        // Print the resulting array b
        for (int i = 0; i < n; ++i) {
            cout << b[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
