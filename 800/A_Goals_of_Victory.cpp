#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> ans(n-1);

        for(int i = 0; i < n-1; i++){
            cin>>ans[i];
        }

        int sum = 0;

        for(int i = 0;i<ans.size(); i++){
            sum += ans[i];
        }

        cout<<sum*(-1)<<endl;
    }

    return 0;
}