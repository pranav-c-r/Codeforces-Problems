#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    string ans;

    for (int i=0; i<s.size();){
        if (s[i]=='.'){
            ans+='0';
            i++;
        }else{ // s[i] == '-'
            if (s[i+1]=='.'){
                ans+='1';
            }else{
                ans+='2';
            }
            i+=2;
        }
    }

    cout<<ans;
    return 0;
}