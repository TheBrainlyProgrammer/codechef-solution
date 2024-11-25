#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string k="";
    while (t--){
        int n;
        cin>>n;
        int s=0;
        while(n){
            s+=n%10;
            n/=10;
        }
        k+=to_string(s)+"\n";
    }
    cout<<k;
}