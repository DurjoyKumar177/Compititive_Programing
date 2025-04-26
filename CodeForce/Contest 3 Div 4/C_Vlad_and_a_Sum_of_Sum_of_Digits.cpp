#include <bits/stdc++.h>

using namespace std;

int sumOfDigits(int num)
{

    if (num < 10)
    {
        return num;
    }

    return num % 10 + sumOfDigits(num / 10);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum1 = 0;
        for (int i = 1; i <= n; i++)
        {
            sum1 = sum1 + sumOfDigits(i);
        }

        cout << sum1 << endl;
    }

    return 0;
}