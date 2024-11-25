#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int k=t;
    string s[t];
    while(t--){
        int n;
        cin >>n;
        while(n){
            s[t]+=to_string(n%10);
            n/=10;
        }
    }
    while(k--)
    cout<<stoi(s[k])<<endl;
    
}