#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int points=0;
        for (int i=0;i<10;i++){
            string s;
            cin>>s;
            for (int j=0;j<10;j++){
                if (s[j]=='X'){
                    int ring=min({i,j,9-i,9-j});
                    points+=ring+1;
                }
            }
        }
        cout<<points<<endl;
    }
    return 0;
}