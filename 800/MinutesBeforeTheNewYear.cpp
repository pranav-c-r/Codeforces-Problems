#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int h,m;
        cin>>h>>m;
        int total=24*60;
        int passed=h*60+m;
        int minutes=total-passed;
        cout<<minutes<<endl;
        
        
    }
    return 0;
}