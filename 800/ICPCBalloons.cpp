#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;

        set<char> st;
        for(int i=0;i<s.size();i++){
            st.insert(s[i]);
        }

        int k=st.size();
        cout<<n+k<<endl;
    }
    return 0;
}
