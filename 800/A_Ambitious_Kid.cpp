#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int N;
    cin >> N;

    vector<int> arr(N);

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (arr[i] < 0)
        {
            arr[i] = arr[i] * -1;
        }
    }

    if (arr.size() == 1)
    {
        cout << arr[0] << endl;
    }
    else
    {
        int mini = INT_MAX;

        for (int i = 0; i < N; i++)
        {
            mini = min(arr[i], mini);
        }

        cout << mini << endl;
    }

    return 0;
}