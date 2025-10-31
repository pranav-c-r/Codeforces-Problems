#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    bool all_upper=true;
    bool all_except_first_upper=true;

    for (char ch:s){
        if (!isupper(ch)){
            all_upper=false;
            break;
        }
    }

    for (int i=1;i<(int)s.size();i++){
        if (!isupper(s[i])){
            all_except_first_upper=false;
            break;
        }
    }

    if (all_upper || (islower(s[0]) && all_except_first_upper)){
        for (char &ch:s){
            if (isupper(ch)){
                ch=tolower(ch);
            }
            else{
                ch=toupper(ch);
            }
        }
    }
    cout<<s<<"\n";
    return 0;
}