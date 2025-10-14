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

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        unordered_map<int, int> freq;

        for (int i = 0; i < n; i++)
        {
            freq[v[i]]++;
        }
        if (freq.size() > 2)
        {
            cout << "No" << endl;
        }
        else if (freq.size() == 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            vector<int> arr;

            for (auto it : freq)
            {
                arr.push_back(it.second);
            }

            if (n % 2 == 0)
            {
                if (arr[0] == arr[1])
                {
                    cout << "Yes" << endl;
                }
                else
                {
                    cout << "No" << endl;
                }
            }
            if (n % 2 != 0)
            {
                if (arr[0] + 1 == arr[1] || arr[0] == arr[1] + 1)
                {
                    cout << "Yes" << endl;
                }
                else
                {
                    cout << "No" << endl;
                }
            }
        }
    }

    return 0;
}