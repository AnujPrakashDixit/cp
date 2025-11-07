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
        long long num1 = 0;
        long long num2 = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                num2++;
            }
            else
            {
                num1++;
            }
        }

        if (num2 == 0)
        {
            cout << 1 << endl;
        }
        else if (num2 % 2 == 0)
        {
            long long firstIndex = num2 / 2;
            long long count = 0;
            int b = 0;
            while (count != firstIndex)
            {
                if (a[b] == 2)
                {
                    count++;
                }
                b++;
            }
            cout << b << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}