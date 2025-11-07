#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> arr(n);

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        vector<int> b(n);

        for(int i = 0; i < n; i++){
            b[i] = n + 1 - arr[i];
        }

        for(int i = 0; i < n; i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}