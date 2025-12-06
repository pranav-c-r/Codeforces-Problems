#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int mcount=0;
    int ccount=0;
    while(n--){
        int m,c;
        cin>>m>>c;
        if (m>c){
            mcount++;
        }
        else if (c>m){
            ccount++;
        }
    }
    if (mcount>ccount)
        cout<<"Mishka"<<endl;
    else if (ccount>mcount)
        cout<<"Chris"<<endl;
    else
        cout<<"Friendship is magic!^^"<<endl;
    return 0;
}