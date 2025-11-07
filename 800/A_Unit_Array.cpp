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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long minus = 0;
        long long plus = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == -1)
            {
                minus++;
            }
            else
            {
                plus++;
            }
        }
        long long ans = 0;
        while (plus < minus || minus % 2 == 1)
        {
            ans++;
            plus++;
            minus--;
        }

        cout << ans << endl;
    }

    return 0;
};