#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(){

    int t;
    cin>>t;

    while(t--){
        long long a, b, c;
        cin>>a>>b>>c;

        if(c%2!=0){
            a++;
        }
        if(a > b){
            cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;
        }
    }


    return 0;
}