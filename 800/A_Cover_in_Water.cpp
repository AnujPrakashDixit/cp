#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        int maxConLen = 0;
        int rnLen = 0;
        int totalEmpcell = 0;
        for(int i = 0 ; i < n; i++){
            if(s[i] == '.'){
                totalEmpcell++;
                rnLen++;
                maxConLen = max(maxConLen,rnLen);
            }
            else{
                rnLen = 0;
            }
        }

        if(maxConLen >= 3){
            cout<<2<<endl;
        }
        else{
            cout<<totalEmpcell<<endl;
        }

    }

    return 0;
}