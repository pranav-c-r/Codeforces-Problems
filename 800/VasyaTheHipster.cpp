#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    int counttwo,countone;
    counttwo=min(a,b);
    int remaining=abs(a-b);
    countone=remaining/2;
    cout<<counttwo<<" "<<countone<<endl;
    return 0;
}