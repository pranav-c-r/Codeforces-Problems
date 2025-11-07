#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    int x=240-k;
    int m=0,count=0;
    for (int i=1;i<=n;i++){
        if (m+5*i<=x){
            m+=5*i;
            count++;
        }
    }
    cout<<count;
    return 0;
}