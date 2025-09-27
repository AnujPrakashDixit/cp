#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(){

    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;

        vector<int>arr(n);

        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }

        arr.push_back(x);
        int size = arr.size();
        int maxi = arr[0];

        for(int i = 1; i < size; i++){
            if(i != n){
                maxi = max(maxi, arr[i] - arr[i-1]);
            }
            else{
                maxi = max(maxi, 2 * (arr[i] - arr[i-1]));
            }
        }
        cout<<maxi<<endl;;
    }


    return 0;
}