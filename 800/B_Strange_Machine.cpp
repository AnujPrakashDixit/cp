#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long t;
    cin >> t;

    while (t--)
    {
        long long n, q;
        cin >> n >> q;

        string s;
        cin >> s;

        vector<long long> querys(q);

        for (long long i = 0; i < q; i++)
        {
            cin >> querys[i];
        }

        for (long long i = 0; i < querys.size(); i++)
        {
            long long query = querys[i];
            long long ans = 0;
            long long mac = 0;
            while (query > 0)
            {
                if (s[mac] == 'A')
                {
                    query--;
                }
                else
                {
                    query = floor(query / 2);
                }
                ans++;
                mac = (mac + 1) % n;
            }
            cout << ans << endl;
        }
    }

    return 0;
}