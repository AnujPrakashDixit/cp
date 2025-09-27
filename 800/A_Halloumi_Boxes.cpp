#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> input(n);

        for (int i = 0; i < n; i++)
        {
            cin >> input[i];
        }

        vector<int> sorted(input.begin(), input.end());

        sort(sorted.begin(), sorted.end());

        if (input == sorted)
        {
            cout << "YES"<<endl;;
        }

        else if (k == 1)
        {
            cout << "NO"<<endl;;
        }
        else if (k > 1)
        {
            cout << "YES"<<endl;;
        }
    }
}