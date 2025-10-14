#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isValid(vector<int> arr)
{
    bool valid = true;

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] != arr[i - 1])
        {
            valid = false;
        }
    }
    return valid;
}

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

        if (isValid(arr))
        {
            cout << -1 << endl;
        }
        else
        {
            vector<int> b;
            vector<int> c;
            int mx = *max_element(arr.begin(), arr.end());

            for (int i = 0; i < n; i++)
            {
                if (mx == arr[i])
                {
                    c.push_back(arr[i]);
                }
                else
                {
                    b.push_back(arr[i]);
                }
            }

            cout << b.size() << " " << c.size() << endl;

            for (int i = 0; i < b.size(); i++)
            {
                cout << b[i] << " ";
            }
            cout << endl;
            for (int i = 0; i < c.size(); i++)
            {
                cout << c[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}