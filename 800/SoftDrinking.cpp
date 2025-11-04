#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int totaldrink=(k*l)/nl;
    int totallime=c*d;
    int totalsalt=p/np;
    int ans=min({totaldrink,totallime,totalsalt})/n;
    cout<<ans<<endl;
    return 0;
}