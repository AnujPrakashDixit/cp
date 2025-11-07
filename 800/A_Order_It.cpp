#include<iostream>
#include<bits/stdc++.h>


using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s; 
    cin.ignore(); 

    vector<string> a(n), b(n);
    map<string, int> posi; 

    for (int i = 0; i < n; i++) {
        getline(cin, a[i]);
        posi[a[i]] = i; 
    }

    cin >> s; 
    cin.ignore(); 

    for (int i = 0; i < n; i++) {
        getline(cin, b[i]);
    }

    int blocks = 1; 
    
    for (int i = 0; i < n - 1; i++) {
        if (posi[b[i]] > posi[b[i+1]]) {
            blocks++; 
        }
    }

    cout << blocks - 1;

    return 0;
}