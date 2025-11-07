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

        if (a[0] == a[n - 1])
        {
            cout << "NO" << endl;
        }

        else
        {
            long long max_number = a[n - 1];
            cout << "YES" << endl;
            cout << max_number << " ";
            for (int i = 0; i < n - 1; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}