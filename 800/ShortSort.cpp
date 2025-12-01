#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;             // abc,cba,acb,bac
    while(t--){
        string s;
        cin>>s;
        if(s=="acb"||s=="abc"||s=="cba"||s=="bac")
            cout<<"YES"<<endl;
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}