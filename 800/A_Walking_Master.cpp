#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        long long x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int ans = 0;
        if (y1 > y2)
        {
            cout << -1 << endl;
            continue;
        }

        while( y2 > y1){
            y1++;
            x1++;
            ans++;
        }

        if(x2 < x1){
            ans += x1 - x2;
            cout<<ans<<endl;
        }
        else if(x1 == x2){
            cout<<ans<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }

    return 0;
}