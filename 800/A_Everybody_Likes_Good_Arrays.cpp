#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool sameP(int a, int b)
{
    if ((a % 2 == 0 && b % 2 == 0) || (a % 2 != 0 && b % 2 != 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

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

        long long min_op = 0;

        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        else
        {
            for (int i = 1; i < n; i++)
            {
                if (sameP(a[i], a[i - 1]))
                {
                    min_op++;
                }
            }
            cout<<min_op<<endl;
        }
    }

    return 0;
}