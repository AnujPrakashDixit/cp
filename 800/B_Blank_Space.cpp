#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }

        int ans = 0;
        int curr = 0;

        for(int i = 0; i < n; i++){
            if(a[i] == 0){
                curr++;
                ans = max(ans,curr);
            }
            else{
                curr = 0;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}