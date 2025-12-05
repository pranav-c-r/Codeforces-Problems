#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string b;
        cin>>b;
        string a="";

        // first two characters of b will be same as that of a
        a+=b[0];
        a+=b[1];

        // every next pair contributes only its second character
        for (int i=3;i<b.size();i+=2){
            a+=b[i];
        }

        // print the string a
        cout<<a<<endl;
    }
    return 0;
}