#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        long long ans = 0;

            long long m3 = n;
            while (m3 > 2)
            {
                long long m1, m2;

                m1 = 1;
                m2 = 1;
                m3 = m3 - (m1 + m2);
                ans++;
            }

        cout << ans << endl;
    }

    return 0;
}