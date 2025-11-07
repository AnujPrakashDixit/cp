#include <iostream>
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

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long total_xor = 0;

        for (int i = 0; i < n; i++)
        {
            total_xor ^= a[i];
        }

        if (n % 2 == 1)
        {
            cout << total_xor << endl;
        }
        else
        {
            if (total_xor == 0)
            {
                cout << 6 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}