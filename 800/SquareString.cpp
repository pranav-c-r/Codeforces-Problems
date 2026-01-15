#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        if (n%2!=0) {
            cout<<"no"<<endl;
        }else{
            string first=s.substr(0,n/2);
            string second=s.substr(n/2,n);
            if(first==second){
                cout<<"yes"<<endl;
            }
            else{
                cout<<"no"<<endl;
            }
        }
    }
    return 0;
}