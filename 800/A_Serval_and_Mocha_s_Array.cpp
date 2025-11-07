#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> a(n);

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }

        bool valid = false;

        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(gcd(a[i],a[j]) <= 2){
                    valid = true;
                }
            }
        }

        if(valid){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }

    return 0;
}